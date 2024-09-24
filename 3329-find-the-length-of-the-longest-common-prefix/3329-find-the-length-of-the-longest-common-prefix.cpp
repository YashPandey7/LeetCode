class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s;

        for(int i=0; i<arr1.size(); i++){
            while(arr1[i] != 0){
                s.insert(arr1[i]);
                arr1[i] = arr1[i]/10;
            }
        }
        int res = 0;
        for(int i=0; i<arr2.size(); i++){
            while(arr2[i] != 0){
                if(s.find(arr2[i]) != s.end()){
                    res = max(res, arr2[i]);
                }
                arr2[i] = arr2[i]/10;
            }
        }
        
        if(res == 0){
            return 0;
        }

        int cnt = 0;
        while(res != 0){
            cnt++;
            res = res/10;
        }
        return cnt;
    }
};