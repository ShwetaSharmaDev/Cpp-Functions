#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int num = n;
   int rev = 0; 
    while( num!=0){
        rev  = rev * 10 + (num % 10);
        num/=10;
    }if(rev == n){
        return true;
    }
    return false;
}
int main() {
  int n;
  cin>>n;
 if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}