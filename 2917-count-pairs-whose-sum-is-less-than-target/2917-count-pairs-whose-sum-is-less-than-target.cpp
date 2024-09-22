class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        sort(nums.begin(), nums.end());
        int l=0; int h = nums.size() - 1;
        while(l < h){
            if(nums[l] + nums[h] < target){
                cnt += h-l;
                l++;
            }else{
                h--;
            }
        }
        return cnt;
    }
};