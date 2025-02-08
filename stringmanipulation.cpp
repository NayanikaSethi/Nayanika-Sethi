#include <iostream>
#include <string>
using namespace std;

int main() {
    string str,empty="";
    char ch;

   
    cout<<"Enter a string";
    getline(cin,str);

   
    int i=0,j= 0;
    while (str[i] != '\0') { 
        if (str[i] != ' ') {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                empty+=str[i] + 32; 
            } else {
                empty+=str[i];
            }
        }
        i++;
    }

   
    int len=0;
    while (empty[len] != '\0') {
        len++;
    }

    
    bool isPalindrome = true;
    for (i=0; i<len/2; i++) {
        if (empty[i] != empty[len-1-i]) {
            isPalindrome = false;
            break;
        }
    }

    
    if (isPalindrome) {
        cout<<"The string is a palindrome"<<endl;
    } else {
        cout<<"The string is not a palindrome"<<endl;
    }

    return 0;
}