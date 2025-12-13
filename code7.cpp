#include <iostream>
using namespace std;
////Count digits
int CountDigit(int n){
    int count = 0;
    while(n>0){
        int rev = n%10;
        count++;
        n/=10;
    }
     return count;
}
int main() {
     int n;
     cin>>n;
     cout<<CountDigit(n);
    return 0;
}