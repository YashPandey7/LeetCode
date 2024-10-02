class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int nums[n+m];
        int  i = 0, j = 0, k = 0;
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                nums[k] = nums1[i];
                i++;
                k++;
            }
            else if(nums1[i] == nums2[j]){
                nums[k] = nums1[i];
                i++; k++;
                nums[k] = nums2[j];
                j++; k++;
            }
            else{
                nums[k] = nums2[j];
                j++; k++;
            }
        }
        while(i < n){
            nums[k] = nums1[i];
            k++;
            i++;
        }
        while(j < m){
            nums[k] = nums2[j];
            j++;
            k++;
        }

        int size = n+m;
        if(size%2 != 0){
            return nums[size/2];
        }
        else{
            // double a = nums[size/2];
            // double b = nums[(size/2) - 1];
            // double res = (a+b)/2;
            // return res;
            return (double)(nums[size/2] + nums[(size/2)-1])/2;
        }

    }
};