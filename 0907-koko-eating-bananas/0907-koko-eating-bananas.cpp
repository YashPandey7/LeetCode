class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int low = 1, high = piles[n-1];
        int mid;
        long long time;
        while(low <= high){
            time = 0;
            mid = low + (high - low)/2;
            for(int i = 0; i<n; i++){
                time += piles[i]/mid;
                if(piles[i]%mid > 0){
                    time += 1;
                }
            }

            if(time <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};