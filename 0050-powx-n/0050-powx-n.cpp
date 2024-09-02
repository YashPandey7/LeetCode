class Solution {
public:
    double pow(double x, long n){
        if (n == 0) {
            return 1.0;
        }

        if(n == 1){
            return x;
        }
        double half = pow(x, n/2);
        if(n%2 == 0){
            return half*half;
        }else{
            return half*half*x;
        }

    }

    double myPow(double x, int n) {
        if(n == 0){
            return 1.0;
        }
        long nn = n;
        if(n < 0){
            nn = -(long)n;
            x = 1/x;
        }
        return pow(x, nn);
    }
};