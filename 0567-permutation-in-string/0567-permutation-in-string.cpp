class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1 > n2){
            return false;
        }

        vector<int> s1Map(26, 0), s2Map(26, 0);
        for(int i=0; i<n1; i++){
            s1Map[s1[i] - 'a']++;
            s2Map[s2[i] - 'a']++;
        }

        for(int i = n1; i<n2; i++){
            if(s1Map == s2Map) return true;

            s2Map[s2[i] - 'a']++;
            s2Map[s2[i-n1] - 'a']--;
        }
        return s1Map == s2Map;
    }
};