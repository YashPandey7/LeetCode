class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> v;
        int n = nums.size();
        for(int i=0; i<n ; i++){
            if(mp.find(target-nums[i]) != mp.end()){
                int j = target - nums[i];
                v.push_back(mp[j]);
                v.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return v;
    }
};