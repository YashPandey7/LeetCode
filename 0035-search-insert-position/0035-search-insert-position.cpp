class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // auto it = lower_bound(nums.begin(), nums.end(), target);
        // return (it- nums.begin());

        int l = 0, h = nums.size() - 1;
        int ans = -1;
        while(l <= h){
            int mid = h - (h-l)/2;
            if(nums[mid] > target){
                h = mid - 1;
            }
            else if(nums[mid] == target){
                return mid;
            }
            else{
                l = mid +1;
                ans = mid;
            }
        }
        return ans+1;
    }
};