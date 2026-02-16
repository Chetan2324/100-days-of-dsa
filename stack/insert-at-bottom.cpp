// GFG - Insert an Element at the Bottom of a Stack

class Solution {
public:
    stack<int> insertAtBottom(stack<int> st, int x) {

        if (st.empty()) {
            st.push(x);
            return st;
        }

        int topElement = st.top();
        st.pop();

        st = insertAtBottom(st, x);

        st.push(topElement);

        return st;
    }
};
