// GFG - Reverse a Stack (Using Auxiliary Stack)

class Solution {
public:
    void reverseStack(stack<int>& st) {

        stack<int> temp;

        while (!st.empty()) {
            temp.push(st.top());
            st.pop();
        }

        st = temp;
    }
};
