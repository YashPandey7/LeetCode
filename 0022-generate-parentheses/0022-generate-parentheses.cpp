class Solution {
public:
    void Parentheses(int i, int j, vector<string> &v,string s, int n){
        if(i == n && j==n){
            v.push_back(s);
            return;
        }
        if(i < n){
            s.append("(");
            Parentheses(i+1, j, v, s, n);
            s.erase(s.end()-1);
        }
        if(i > j){
            s.append(")");
            Parentheses(i, j+1, v, s, n);
            s.erase(s.end() - 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s;
        Parentheses(0, 0, v, s, n);
        return v;
    }
};