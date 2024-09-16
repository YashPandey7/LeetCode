class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0, cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            if(sum == k){
                cnt++;
            }
            if(mp.find(sum-k) != mp.end()){
                cnt += mp[sum-k];
            }

            if(mp.find(sum) == mp.end()){
                mp[sum] = 1;
            }else{
                mp[sum]++;
            }
        }
        return cnt;
    }
};