// 20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) 
    {
        int n = s.size();
        stack<char>st;
        for(int i = 0;i < n;i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            if(s[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i] == '}'){
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i] == ']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};