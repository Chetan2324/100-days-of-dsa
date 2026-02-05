#include <bits/stdc++.h>
using namespace std;

int firstRepeated(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int target = arr[i];

        for (int j = i + 1; j < n; j++) {
            if (arr[j] == target)
                return i + 1;   // 1-based index
        }
    }

    return -1;
}
