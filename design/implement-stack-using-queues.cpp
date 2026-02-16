// LeetCode 225 - Implement Stack using Queues
// https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:
    queue<int> q1;   // primary queue
    queue<int> q2;   // helper queue

    MyStack() {}

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int popped = q1.front();
        q1.pop();

        swap(q1, q2);

        return popped;
    }

    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q1.pop();
        q2.push(topElement);

        swap(q1, q2);

        return topElement;
    }

    bool empty() {
        return q1.empty();
    }
};
