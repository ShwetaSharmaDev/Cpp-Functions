#include <iostream>
using namespace std;

double mypow(int x , int n){
    if(n==0){
        return 1;
    }

    int ans =  x * mypow(x , n-1);
    return ans;
}

int main() {

    cout<<mypow(2 , 10);
    
    return 0;
}