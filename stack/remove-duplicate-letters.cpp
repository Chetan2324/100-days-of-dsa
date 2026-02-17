// LeetCode 316 - Remove Duplicate Letters
// https://leetcode.com/problems/remove-duplicate-letters/
// Monotonic Stack + Greedy

class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector<int> last(26);
        vector<bool> seen(26, false);
        int n = s.length();

        // store last occurrence of each character
        for (int i = 0; i < n; i++) {
            last[s[i] - 'a'] = i;
        }

        stack<char> st;

        for (int i = 0; i < n; i++) {

            char c = s[i];

            if (seen[c - 'a'])
                continue;

            while (!st.empty() &&
                   c < st.top() &&
                   last[st.top() - 'a'] > i) {

                seen[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(c);
            seen[c - 'a'] = true;
        }

        string res = "";

        while (!st.empty()) {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};
