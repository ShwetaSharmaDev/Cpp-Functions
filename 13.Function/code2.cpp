#include <iostream>
using namespace std;

int sumDigit(int num){

    int result = 0;
    while(num !=0){
        int temp = num%10;
        result += temp;
        num /=10;
    }
    return result;
}

int main() {

    cout<<sumDigit(345);
    
    return 0;
}