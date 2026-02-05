// LeetCode 151 - Reverse Words in a String
// https://leetcode.com/problems/reverse-words-in-a-string/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string word;

        for (char ch : s) {
            if (ch == ' ') {
                if (!word.empty()) {
                    temp.push_back(word);
                    word = "";
                }
            } else {
                word += ch;
            }
        }

        if (!word.empty())
            temp.push_back(word);

        string ans = "";

        for (int i = temp.size() - 1; i >= 0; i--) {
            ans += temp[i];
            if (i > 0) ans += ' ';
        }

        return ans;
    }
};
