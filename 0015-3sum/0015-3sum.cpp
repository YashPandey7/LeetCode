class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        if(n < 3){
            return ans;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            if(nums[i] > 0){
                break;
            }
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            // vector<int> v;
            int l = i+1, h = n-1;
            while(l < h){
                int sum = nums[l] + nums[h] + nums[i];
                if(sum > 0){
                    h--;
                }else if(sum < 0){
                    l++;
                }else{
                    vector<int> v = {nums[i], nums[l], nums[h]};
                    ans.push_back(v);
                    l++;
                    h--;
                    while(l<h && nums[l] == nums[l-1]){
                        l++;
                    }
                    while(l<h && nums[h] == nums[h+1]){
                        h--;
                    }
                }
            }
        }
        return ans;
    }
};