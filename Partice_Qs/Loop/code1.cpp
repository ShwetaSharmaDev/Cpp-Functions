// reverse concept 

#include <iostream>
using namespace std;
int main() {

    int num , rev = 0;
    cin>>num;

    while (num != 0)
    {
        int temp = num % 10;
        rev = (rev * 10) + temp ;
        num /=10;
    }
    cout<<rev;
    
    return 0;
}