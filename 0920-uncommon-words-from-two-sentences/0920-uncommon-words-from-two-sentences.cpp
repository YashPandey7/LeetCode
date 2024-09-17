class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        string str = "";
        s1 = s1 + " " + s2;
        for(int i=0; i<s1.size(); i++){
            if(s1[i] == ' '){
                mp[str]++;
                str="";
            }else{
                str += s1[i];
            }
        }
        if(!str.empty()){
            mp[str]++;
        }

        vector<string> v;
        for(auto it : mp){
            if(it.second == 1){
                v.push_back(it.first);
            }
        }
        return v;
    }
};