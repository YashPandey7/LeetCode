class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int res = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                res++;
                st.push('(');
            }
            else{
                if(!st.empty() && st.top() == '('){
                    res--;
                    st.pop();
                }
                else{
                    res++;
                    st.push(')');
                }
            }
        }
        return res;
    }
};