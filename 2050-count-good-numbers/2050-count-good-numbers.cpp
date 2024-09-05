class Solution {
public:
    long long power(long long x, long long n){
        if(n == 0){
            return 1;
        }
        long long temp = power(x, n/2);
        temp = (temp*temp)%1000000007;
        if(n%2 != 0){
            temp = (temp*x)%1000000007;
        }
        return temp;
    }

    int countGoodNumbers(long long n) {
        long long ans;
        ans = (power(5, n/2) * power(4, n/2))%1000000007;
        if(n%2 != 0){
            ans = (ans*5)%1000000007;
        }
        int res = ans;
        return res;
    }
};