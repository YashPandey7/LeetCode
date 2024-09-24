class Solution {
public:
    int first(vector<int>& nums, int target){
        int l = 0, h = nums.size() - 1;
        while(l <= h){
            int mid = h - (h-l)/2;
            if(nums[mid] > target){
                h = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                if(mid == 0 || nums[mid] != nums[mid - 1]){
                    return mid;
                }
                else{
                    h = mid - 1;
                }
            }
        }
        return -1;
    }

    int last(vector<int>& nums, int target){
        int l = 0, h = nums.size() - 1;
        while(l <= h){
            int mid = h - (h-l)/2;
            if(nums[mid] > target){
                h = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                if(mid == nums.size() - 1 || nums[mid] != nums[mid + 1]){
                    return mid;
                }
                else{
                    l = mid + 1;
                }
            }
        }
        return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(first(nums, target));
        v.push_back(last(nums, target));
        return v; 
    }
};