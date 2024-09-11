class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        int expected_sum = n*(n+1)/2;
        int ans = expected_sum - sum;
        return ans;
    }
};