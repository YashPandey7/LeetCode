class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        arr[0] = nums[0];
        int res = arr[0];
        for(int i=1; i<n; i++){
            arr[i] = max(nums[i], nums[i]+arr[i-1]);
            res = max(res, arr[i]);
        }
        return res;
    }
};