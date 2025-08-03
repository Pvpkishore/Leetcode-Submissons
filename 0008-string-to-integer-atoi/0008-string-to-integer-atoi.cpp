class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n= s.size();
        long result =0; // Use long to handle overflow during calculation
        int sign = 1;

        while(i<n && s[i]==' '){
            i++;     //move forword if space is there
        }

        //Handle sign
        if(i<n && (s[i]=='-' || s[i]=='+')){ 
             sign = (s[i]=='-') ? -1:1;
             i++;
        }

        //converting to integer
         // Step 3: Process numeric characters and handle overflow

         while(i<n && isdigit(s[i])){

            result = result * 10 + (s[i] - '0'); //converts string to integer

             // Break early if the result goes out of bounds

             if(sign==1 && result>INT_MAX){
                return INT_MAX;
             }

             if (sign == -1 && -result < INT_MIN) {
                return INT_MIN;
            }

               i++;   
         }
         
         return static_cast<int>(sign * result); //explicitly using static_cast<int> is a good practice to avoid unintended implicit conversions.
    }
};