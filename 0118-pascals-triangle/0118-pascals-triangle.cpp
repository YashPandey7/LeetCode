class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n = numRows;
        for(int i=1; i<=n; i++){
            vector<int>v;
            if(i == 1){
                v.push_back(1);
                ans.push_back(v);
            }
            else{
                vector<int> prev = ans.back();
                int sum = 0;
                for(int j = 0; j < i; j++){
                    if(j==0 || j == i-1){
                        v.push_back(1);
                    }else{
                        sum = prev[j] + prev[j-1];
                        v.push_back(sum);
                    }
                }
                ans.push_back(v);
            }
        }
        return ans;
    }
};