class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> nums(n+m);
        int  i = 0, j = 0, k = 0;
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                nums[k++] = nums1[i++];
            }
            else if(nums1[i] == nums2[j]){
                nums[k++] = nums1[i++];
                nums[k++] = nums2[j++];
            }
            else{
                nums[k++] = nums2[j++];
            }
        }
        while(i < n){
            nums[k++] = nums1[i++];
        }
        while(j < m){
            nums[k++] = nums2[j++];
        }

        int size = n+m;
        if(size%2 != 0){
            return nums[size/2];
        }
        else{
            return (double)(nums[size/2] + nums[(size/2)-1])/2;
        }

    }
};