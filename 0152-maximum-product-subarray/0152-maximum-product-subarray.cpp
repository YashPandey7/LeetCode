class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int val1 = 1, val2 = 1;
        int n = nums.size();
        int ans = INT_MIN;
        // for(int i=0; i<n; i++){
        //     val = val*nums[i];
        //     ans = max(ans, val);
        //     if(nums[i] == 0){
        //         val = 1;
        //     }
        // }
        // val = 1;
        // for(int i=n-1; i>=0; i--){
        //     val *= nums[i];
        //     ans = max(ans, val);
        //     if(nums[i] == 0){
        //         val = 1;
        //     }
        // }

        for(int i=0; i<n; i++){
            val1 = val1*nums[i];
            ans = max(ans, val1);
            if(nums[i] == 0){
                val1 = 1;
            }
            val2 = val2*nums[n-1-i];
            ans = max(ans, val2);
            if(nums[n-1-i] == 0){
                val2 = 1;
            }
        }
        return ans;
    }
};