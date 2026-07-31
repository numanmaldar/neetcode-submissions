class Solution {
public:
 bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> pairs = {{')', '('}, {']', '['}, {'}', '{'}};
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            // closing bracket — check stack isn't empty and top matches
            if (st.empty() || st.top() != pairs[s[i]]) {
                return false;
            }
            st.pop();
        }
    }
    
    return st.empty();
}
};
