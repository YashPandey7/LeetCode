class Solution {
public:
    void Combinations(int i, vector<int>&arr,int target, vector<vector<int>> &ans,
    vector<int> &v){
        if(i == arr.size()){
            if(target == 0){
                ans.push_back(v);
            }
            return ;
        }

        if(arr[i] <= target){
            v.push_back(arr[i]);
            Combinations(i, arr, target-arr[i], ans, v);
            v.pop_back();
        }
        Combinations(i+1, arr, target, ans, v);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        Combinations(0, candidates, target, ans, v);
        return ans;
    }
};