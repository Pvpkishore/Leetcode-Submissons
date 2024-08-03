class Solution {
public:
    bool isPalindrome(int x) {
        int ans=0,r;
        int temp=x;
        while(x>0){
            r=x%10;
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
            ans=ans*10+r;
            x=x/10;
        }
    if(ans==temp)return true;
    else return false;
    }
};