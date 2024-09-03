class Solution {
public:
    void combinations(int ind,vector<int>&v, vector<vector<int>>& ans, vector<int> &arr, int n, int target){
        if(target == 0){
            ans.push_back(v);
            return ;
        }
        for(int i = ind; i<n; i++){
            if(i>ind && arr[i] == arr[i-1]){
                continue;
            }
            if(arr[i] > target){
                break;
            }
            v.push_back(arr[i]);
            combinations(i+1, v, ans, arr, n, target-arr[i]);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> v;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        combinations(0, v, ans, candidates, candidates.size(), target);
        return ans;
    }
};