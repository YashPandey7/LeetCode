class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1){
            return true;
        }
        if(n==0 || n%2 != 0 || n%3 == 0 || n%4 != 0){
            return false;
        }
        return isPowerOfFour(n/4);
    }
};