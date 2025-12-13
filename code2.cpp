#include <iostream>
using namespace std;
// Print all Prime 2 to n ;

bool isPrime(int n){
  for(int i=2; i<n; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true ;
}

void digits(int n){
  for(int i=2; i<=n; i++){
     if(isPrime(i)){
      cout<<i<<" ";
     }
  }
}
 
int main() {
  int n;
  cin>>n;
  digits(n);
    return 0;
}