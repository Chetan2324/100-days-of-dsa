// LeetCode 34 - Find First and Last Position of Element in Sorted Array
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int first = -1, last = -1;

        int low = 0, high = arr.size() - 1;

        // find first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= target) high = mid - 1;
            else low = mid + 1;

            if (arr[mid] == target) first = mid;
        }

        low = 0;
        high = arr.size() - 1;

        // find last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] <= target) low = mid + 1;
            else high = mid - 1;

            if (arr[mid] == target) last = mid;
        }

        return {first, last};
    }
};
