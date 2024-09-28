class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 1, h = nums[n-1];
        int mid = l + (h-l)/2;
        while(l<=h){
            mid = l + (h-l)/2;
            int sum = 0;
            for(int i =0; i<n; i++){
                sum = sum + nums[i]/mid;
                if(nums[i]%mid != 0){
                    sum++;
                }
            }

            if(sum > threshold){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return l;
    }
};