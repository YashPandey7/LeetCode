class Solution {
public:
    int minLength(string s) {
        int n = s.size();
        if(n<2){
            return n;
        }

        for(int i=0; i<n-1; i++){
            string str = s.substr(i,2);
            if(str == "AB" || str == "CD"){
                s.erase(i, 2);
                if(i > 0){
                    i = i-2;
                }
                else{
                    i--;
                }
                n = n-2;
            }
        }
        return n;
    }
};