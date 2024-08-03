class Solution {
public:
    char toLowerCase(char ch)
 {
    // converts all the upper case letters to lower case
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }  
}

bool isValid( char ch )
{
    // checks each character of the string if it is valid or not
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
    {
        return 1;
    }
    return 0;
}

bool isPalindrome(string s) {
    string str="";
    for(int i=0;i<s.size();i++)
    {
        if( isValid( s[i] ) )
        {
            str.push_back(s[i]);
            // if the character is valid in the string then it would be inserted in the newly created string
        }
    }
    int size=str.size();
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        if( toLowerCase(str[start]) != toLowerCase(str[end]))
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
};