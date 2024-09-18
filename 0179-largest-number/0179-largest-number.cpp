class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int i=0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            arr.push_back(str);
        }
        auto comp = [] (string &a, string &b){
            return a+b > b+a;
        };
        sort(arr.begin(), arr.end(), comp);

        if(arr[0] == "0"){
            return "0";
        }
        
        string s = "";
        for(int i=0; i<arr.size(); i++){
            s += arr[i];
        }
        return s;
    }
};