class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<int> v;
        for(auto p : mp){
            if(p.second > nums.size()/3){
                v.push_back(p.first);
            }
        }
        return v;
    }
};