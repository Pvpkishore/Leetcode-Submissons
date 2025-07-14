class Solution {
public:
    double myPow(double x, int n) {

        // double ans = 1.0;

        // if (n == -1) {
        //     ans = 1 / x;
        //     return ans;
        // }

        // if ((int)x == ans) {
        //     return ans;
        // }

        // if (n > 0)
        //    {
        //     for (long int i = 1; i <= n; i++) {
        //         ans *= x;
        //     }
        // } else if (n < 0) {
            
        //     for (long int i = 1; i <=-n; i++) {
        //         ans *= x;
        //     }
        //     ans = 1 / ans;
        // }
        // return ans;

        long long N =n;

        if(N<0){
            x = 1/x;
            N= -N;
        }

        double ans =1.0;


        // Fast exponentiation loop (Exponentiation by squaring)
        while(N){
           // If current bit is set, multiply result by current x
            if (N % 2 == 1) {
                ans *= x;
            }

            // Square the base for next bit
            x *= x;

            // Shift exponent right (divide by 2)
            N /= 2;
        }

        return ans;
    }
};