class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            int a = ((arr[i]%k) + k)%k;
            mp[a]++;
        }

        for(auto x : mp){
            int a = x.first;
            int b = x.second;

            if(a == 0){
                if(b%2 != 0){
                    return false;
                }
            }
            else if(mp[a] != mp[k-a]){
                return false;
            }
        }
        return true;
    }
};