class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int sum = 0;
        for(int i=0; i<weights.size(); i++){
            sum = sum + weights[i];
        }
        int h = sum;
        while(l <= h){
            int mid = l + (h-l)/2;
            int cnt = 0;
            int sum1 = 0;
            for(int i = 0; i<weights.size(); i++){
                if(weights[i] + sum1 > mid)
                {
                    cnt++;
                    sum1 = weights[i];
                }else{
                    sum1 += weights[i];
                }
            }
            cnt++;

            if(cnt <= days){
                h = mid-1;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};