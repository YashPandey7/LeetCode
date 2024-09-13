class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] >= 0){
                a.push_back(nums[i]);
            }else{
                b.push_back(nums[i]);
            }
        }

        int j=0;
        for(int i = 0; i<a.size(); i++){
            nums[j] = a[i];
            j++;
            nums[j] = b[i];
            j++;
        }
        return nums;
    }
};