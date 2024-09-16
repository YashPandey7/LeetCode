class Solution {
public:
    void permutation(int ind, vector<int> & nums, vector<vector<int>>& ans){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = ind; i<nums.size(); i++){
            swap(nums[i], nums[ind]);
            permutation(ind + 1, nums, ans);
            swap(nums[i], nums[ind]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(0, nums, ans);
        return ans;
    }
};