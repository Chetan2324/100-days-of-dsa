// LeetCode 451 - Sort Characters By Frequency
// https://leetcode.com/problems/sort-characters-by-frequency/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for (char c : s)
            mp[c]++;

        map<int, vector<char>, greater<int>> freq;

        for (auto it : mp)
            freq[it.second].push_back(it.first);

        string ans = "";

        for (auto it : freq) {
            for (char ch : it.second) {
                for (int i = 0; i < it.first; i++)
                    ans += ch;
            }
        }

        return ans;
    }
};
