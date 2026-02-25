// Min Heap Basics using priority_queue (C++)

#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int>> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }

    cout << pq.top() << endl;
    pq.pop();

    cout << "Top element after deletion: " << pq.top() << endl;

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
