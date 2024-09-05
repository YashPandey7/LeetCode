class Solution {
public:
    void print(int i, vector<string> & ans, string &v,string digits, int n, vector<vector<string>> str){
        if(i == n){
            ans.push_back(v);
            return;
        }
        for(auto x : str[digits[i] - '2']){
            v += x;
            print(i+1, ans, v, digits, n, str);
            v.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<vector<string>> str = {{"a", "b", "c"}, {"d", "e", "f"}, {"g", "h", "i"},{"j", "k", "l"}, {"m", "n", "o"}, {"p", "q", "r", "s"}, {"t", "u", "v"}, {"w", "x", "y", "z"}};
    vector<string> ans;
    string v ;
    int n = digits.size();
    if(n==0){
        return ans;
    }

    print(0, ans, v, digits, n, str);
    return ans;
    }
};