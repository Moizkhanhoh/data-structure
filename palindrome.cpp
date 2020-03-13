#include <iostream>  
#include <string.h>
using namespace std;  

bool isPalindrome(const string &str, int start, int end)
{
    if (start >= end)   
        return true;
    if (str[start] != str[end])
        return false;
    return isPalindrome(str, ++start, --end);   
}
int main(){  
    char str[20];
    //int flag = 0;
    
    cout << "Enter a string: ";
    cin >> str;
    
    int len = strlen(str)-1;
   
    if(isPalindrome(str,0,len))    
        cout << str << " is a Palindrome." << endl;    
    else    
        cout << str << " is not a Palindrome." << endl;   
    return 0;  
}  
