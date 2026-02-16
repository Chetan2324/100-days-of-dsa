// Implement Stack using One Queue
// Optimized Version (Single Queue Rotation Method)

class MyStack {
    queue<int> q;

public:

    void push(int x) {
        int sz = q.size();
        q.push(x);

        // rotate previous elements
        while (sz--) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }

    void pop() {
        if (!q.empty())
            q.pop();
    }

    int top() {
        if (q.empty())
            return -1;

        return q.front();
    }

    int size() {
        return q.size();
    }
};
