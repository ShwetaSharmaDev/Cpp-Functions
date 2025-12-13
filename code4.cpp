#include <iostream>
using namespace std;
//Sum of Digits Function

  int sumofDigits(int n){
    int sum = 0;
    while( n > 0){
        int digit = n % 10 ;
        sum += digit;
        n/=10;
    }
    return sum ;
  }
    
int main() {
   int n;
   cin>>n;
   cout<<sumofDigits(n);
    return 0;
}