// GFG - Delete Middle Element of Stack

class Solution {
public:
    
    void deleter(stack<int>& st, int size) {

        if (st.size() == (size + 1) / 2) {
            st.pop();
            return;
        }

        int top = st.top();
        st.pop();

        deleter(st, size);

        st.push(top);
    }

    void deleteMid(stack<int>& s) {
        int n = s.size();
        deleter(s, n);
    }
};
