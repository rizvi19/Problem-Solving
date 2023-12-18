// https://leetcode.com/problems/count-good-numbers/description/

class Solution {
public:
    long long m=1000000007;
    long long calc_pow(long long a, long long b){
        if(b==0)
            return 1;
        long long n=calc_pow(a, b/2);
        n=(n*n)%m;
        
        if(b%2)
            n=a*n;
        
        return n%m;
    }
    long long countGoodNumbers(long long n) {
        long long x, y;
        x=n/2;
        y=n/2+n%2;
        return (calc_pow(4, x)*calc_pow(5, y))%m;
        
        
            
    }
};
