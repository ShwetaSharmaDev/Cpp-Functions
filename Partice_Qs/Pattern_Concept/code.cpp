// Square star pattern 

#include <iostream>
using namespace std;
int main() {

    int star;
    cin>>star;

    for(int i=1; i<=star; i++){
        for(int j=1; j<=star; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    
    return 0;
}