class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0, h = nums.size() - 1;
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        while(l <= h){
            int mid = l + (h-l)/2;
            if(mid == 0){
                if(mid+1 <= h && nums[mid+1] < nums[mid]){
                    return mid;
                }else{
                    l = mid + 1;
                    continue;
                }
            }
            else if(mid == n-1){
                if(mid - 1>= 0 && nums[mid-1] < nums[mid]){
                    return mid;
                }else{
                    h = mid - 1;
                    continue;
                }
            }

            if(nums[mid] > nums[mid-1] && nums[mid + 1] < nums[mid]){
                return mid;
            }
            else if(nums[mid] < nums[mid+1] && nums[mid-1]>nums[mid]){
                if(nums[mid-1] > nums[mid+1]){
                    h = mid-1;
                }
                else{
                    l = mid + 1;
                }
            }
            else if(nums[mid] < nums[mid+1]){
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }
        return 0;
    }
};