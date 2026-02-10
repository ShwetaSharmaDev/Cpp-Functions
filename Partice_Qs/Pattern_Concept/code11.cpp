// Diamond Pattern 

#include <iostream>
using namespace std;

int main() {
    int n = 6;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }

        for(int m =1 ; m <=2*i-1; m++){
            cout<<"*";
        }

        cout << "\n";
    }


    for(int i=n; i>-1; i--){
        // space 
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // star 
        for(int j=1; j<=2*i-1; j++){
            cout<< "*";
        }
        cout<<"\n";
    }

    return 0;
}