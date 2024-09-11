class Solution {
public:
    void rotateArray(int l, int h, vector<int>& nums){
        while(l <= h){
            int temp = nums[l];
            nums[l] = nums[h];
            nums[h] = temp;
            l++;
            h--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < k){
            k = k%n;
        }
        
        rotateArray(0, n-k-1, nums);
        rotateArray(n - k, n-1, nums);
        rotateArray(0, n-1, nums);
    }
};