class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        vector<int> v;
        for(int i=0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(j-1 >=0 && mat[i][j-1] > mat[i][j]){
                    continue;
                }
                else if(j+1 < c && mat[i][j+1] > mat[i][j]){
                    continue;
                }
                else if(i-1>=0 && mat[i-1][j] > mat[i][j]){
                    continue;
                }
                else if(i+1<r && mat[i+1][j] > mat[i][j]){
                    continue;
                }
                else{
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};