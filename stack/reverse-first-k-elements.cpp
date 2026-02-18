// GFG - Reverse First K Elements of Queue

class Solution {
public:
    queue<int> reverseFirstK(queue<int> q, int k) {

        int n = q.size();

        if (k > n)
            return q;

        vector<int> temp;

        // Store first k elements
        for (int i = 0; i < k; i++) {
            temp.push_back(q.front());
            q.pop();
        }

        // Push them back in reverse order
        for (int i = k - 1; i >= 0; i--) {
            q.push(temp[i]);
        }

        // Move remaining elements to back
        for (int i = 0; i < n - k; i++) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};
