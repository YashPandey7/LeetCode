class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long multi = (long long)m*k;
        if(multi > n){
            return -1;
        }
        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int h = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;
        while(l <= h){
            int mid = l + (h-l)/2;
            int cnt = 0;
            int sum = 0;
            for(int i = 0; i<n; i++){
                if(bloomDay[i] <= mid){
                    sum++;
                    if(sum == k){
                        cnt++;
                        sum = 0;
                    }
                }else{
                    sum = 0;
                } 
            }

            if(cnt < m){
                l = mid + 1;
            }
            else{
                result = mid;
                h = mid - 1;
            }
        }
        return result;
    }
};