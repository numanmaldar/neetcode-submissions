class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int longest_st = 0;
        for(int num: nums){
            
            if (s.find(num - 1) == s.end()) {
                int current_num = num;
                int current_streak = 1;
            
            while (s.find(current_num + 1) != s.end()) {
                    current_num += 1;
                    current_streak += 1;
                }
            
            longest_st = max(longest_st, current_streak);
        }
        }
    return longest_st;

    }
};
