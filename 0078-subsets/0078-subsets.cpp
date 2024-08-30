class Solution {
public:
    void combinations(int i, vector<int>& nums, vector<int>& v, vector<vector<int>>& ans){
        if(i == nums.size()){
            ans.push_back(v);
            return;
        }
        combinations(i+1, nums, v, ans);
        v.push_back(nums[i]);
        combinations(i+1, nums, v, ans);
        v.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        combinations(0, nums, v, ans);
        return ans;
    }
};