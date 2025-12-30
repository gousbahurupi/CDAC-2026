#include <iostream>
#include <string.h>
using namespace std;
bool isPalindrome(string s){
    string r;
    for(int i=0;s[i]!='\0';i++)
    {
        r=s[i]+r;
    }
    if(s==r){
        return true;
    }
    return false;
}
int main(){
    char s[10] ;
    cout<<"Enter string: ";
    cin>>s;
    if(isPalindrome(s)){
        cout<<"The string is palindrome!";
    }else{
        cout<<"The string is not palindrome!";
    }
  
}