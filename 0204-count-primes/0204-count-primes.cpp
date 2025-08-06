class Solution {
public:


//    bool isprime(int n){
//        if(n<=1) return false;
//        if(n==2)  return true;
//        if (n % 2 == 0) return false; // even numbers other than 2 are not prime\

//        for(int i=3;i<=sqrt(n);i+=2){
//          if (n % i == 0)
//             return false;
//        }

//        return true;
//    }

//     int countPrimes(int n) {
//         int prime_numbers =0;
        
//         if(n==0 || n==1){
//             return prime_numbers;
//         }
//         for(int i=2;i<n;i++){
//              if(isprime(i)){
//                 prime_numbers++;
//              }
//         }
//         return prime_numbers;
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return count(isPrime.begin(), isPrime.end(), true);

    }
};