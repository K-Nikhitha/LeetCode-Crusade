class Solution {
public:
    string removeOuterParentheses(string s) {
    
        stack<char> st;
        string str;
        for(auto i : s)
        {
            if(i=='(')
            {
                if(st.size() > 0)
                    str+='(';
                st.push('(');
            }
            else
            {
                if(st.size() > 1)
                    str+=')';
                st.pop();
            }
        }
        return str;
    }
};
