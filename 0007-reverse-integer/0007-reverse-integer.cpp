class Solution {
public:
    int reverse(int x) {
      int sum=0;
     while(x!=0){
            int r = x%10;
            if(sum >= INT_MAX || sum <= INT_MIN){
                 return 0;
            }
            sum = sum*10+r;
            x=x/10;
        }
        return sum;
    }
};