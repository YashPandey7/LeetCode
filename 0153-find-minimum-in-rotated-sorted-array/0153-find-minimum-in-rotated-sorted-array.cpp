class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        int res = INT_MAX;
        while(l <= h){
            int mid = l + (h-l)/2;
            res = min(res, nums[mid]);
            if(nums[l] > nums[h]){
                if(nums[l] > nums[mid]){
                    h = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            else{
                res = min(res, nums[l]);
                break;
            }
        }
        return res;
    }
};