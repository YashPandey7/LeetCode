class Solution {
public:
    bool isPal(string s){
        int low = 0;
        int high = s.size() - 1;
        while(low <= high){
            if(s[low] != s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }

    void print(int i, vector<vector<string>>& ans, vector<string>&v, int n, string &s){
        if(i == n) {
            ans.push_back(v);
        }
        string str;
        for(int j = i; j<n; j++){
            str += s[j];
            if(isPal(str)){
                v.push_back(str);
                print(j+1, ans, v, n, s);
                v.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        print(0, ans, v, s.size(), s);
        return ans;
    }
};