class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int h = 0;
        for(int i = 0; i<nums.size(); i++){
            h += nums[i];
        }

        while(l <= h){
            int mid = l + (h-l)/2;
            int cnt = 0, sum = 0;
            for(int i=0; i<nums.size(); i++){
                if(sum + nums[i] <= mid){
                    sum += nums[i];
                }else{
                    cnt++;
                    sum = nums[i];
                }
            }
            cnt++;

            if(cnt > k){
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }
        return l;
    }
};