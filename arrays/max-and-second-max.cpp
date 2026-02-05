#include <bits/stdc++.h>
using namespace std;

int findmax(vector<int> arr) {
    int maxi = arr[0];

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    return maxi;
}

int findsecmax(vector<int> arr) {
    int maxi = arr[0];
    int secmax = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxi) {
            secmax = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > secmax && arr[i] != maxi) {
            secmax = arr[i];
        }
    }

    return secmax;
}
