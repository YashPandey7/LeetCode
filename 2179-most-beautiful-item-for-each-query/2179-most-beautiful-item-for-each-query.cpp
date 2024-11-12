class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> ans;
        sort(items.begin(), items.end());

        for(int i=1; i<items.size(); i++){
            items[i][1] = max(items[i][1], items[i-1][1]);
        }

        for(int i=0; i<queries.size(); i++){
            int l = 0, h = items.size()-1, res = 0;
            while(l <= h){
                int mid = l +(h-l)/2;
                if(items[mid][0] <= queries[i]){
                    res = items[mid][1];
                    l = mid + 1;
                }
                else{
                    h = mid - 1;
                }
            }
            ans.push_back(res);
        }
        return ans; 
    }
};