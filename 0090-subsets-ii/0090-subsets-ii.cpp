class Solution {
public:
    void print(int i, vector<vector<int>>& ans, vector<int> &v, vector<int> &nums){
        if(i == nums.size()){
            if(find(ans.begin(), ans.end(), v) == ans.end()){
                ans.push_back(v);
            }
            return;
        }
        print(i+1, ans, v, nums);
        v.push_back(nums[i]);
        print(i+1, ans, v, nums);
        v.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        print(0, ans, v, nums);
        return ans;
    }
};