class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        int mid = 0;
        while(l <= h){
            mid = l + (h-l)/2;
            int ans = (h-l)/2;
            if(l <= mid -1 && h >= mid + 1){
                if(nums[mid-1]!= nums[mid] && nums[mid+1] != nums[mid]){
                    return nums[mid];
                }
            }
            
            if(ans%2 == 0){
                if((mid-1) >= l && nums[mid] == nums[mid-1]){
                    h = mid-2;
                }else{
                    l = mid + 2;
                }
            }else{
                if((mid - 1) >= l && nums[mid] != nums[mid-1]){
                    h = mid - 1;
                }else{
                    l = mid + 1;
                }
            }

        }
        return nums[mid];
    }
};