#include <iostream>
using namespace std;
int main() {

    int num = 10829 , sum = 0;

    while(num != 0){
        int temp = num % 10;
        sum += temp;

        num /= 10;
    }
    cout<<sum;   
    return 0;
}