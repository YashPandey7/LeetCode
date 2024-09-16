class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }

        set<int> st;
        for(auto x : nums){
            st.insert(x);
        }
        vector<int> v;
        for(auto x : st){
            v.push_back(x);
        }

        int count = 1, res = 1;
        for(int i=1; i<v.size(); i++){
            if(v[i] == v[i-1] + 1){
                count++;
            }
            else{
                count = 1;
            }
            res = max(count, res);
        }
        return res;
    }
};