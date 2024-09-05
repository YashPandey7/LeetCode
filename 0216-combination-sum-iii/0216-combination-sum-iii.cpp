class Solution {
public:
    void value(int i, vector<vector<int>> &ans, vector<int> &v, int k, int target){
        if(i == k){
            if(target == 0){
                vector<int> temp = v;
                sort(temp.begin(), temp.end());
                auto it = find(ans.begin(), ans.end(), temp);
                if(it == ans.end()){
                    ans.push_back(temp);
                }
            }
            return;
        }
        for(int x = 1; x<=9; x++){
            auto it = find(v.begin(), v.end(), x);
            if(it == v.end()){
                v.push_back(x);
                value(i+1, ans, v, k, target-x);
                v.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        value(0, ans, v, k, n);
        return ans;
    }
};