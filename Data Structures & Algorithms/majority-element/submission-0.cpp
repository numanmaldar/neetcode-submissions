class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>count;
        int max = 0;
        int res = 0;
        for(int i : nums){
            count[i]++;
            if(count[i]>max){
                max = count[i];
                res = i;
            }
        }
        return res;
    }
};