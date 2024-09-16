class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> v;
        for(auto x : timePoints){
            int col = x.find(":");
            string hours = x.substr(0, col);
            string minutes = x.substr(col+1);

            int hrs = stoi(hours);
            int mins = stoi(minutes);
            int res = (hrs*60 + mins);
            // res = min(res, 1440-res);
            v.push_back(res);
        }
        sort(v.begin(), v.end());
        int res = INT_MAX;
        int n = v.size();
        for(int i = 1; i<n; i++){
            res = min(res, v[i] - v[i-1]);
        }

        res = min(res, 1440-v[n-1] + v[0]);
        return res;
    }
};