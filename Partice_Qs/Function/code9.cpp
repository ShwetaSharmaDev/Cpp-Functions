#include <iostream>
using namespace std;

int sumOfThreeDigit (int num){
    int sum = 0;
    while(num != 0){
        int digit = num % 10;
        sum =  sum + digit;
        num /= 10;
    }
    return sum; 
}


int main()
{

    int a = 534;
    // sum of three digit
    sumOfThreeDigit(a);
    cout << "Sum of three digit: " << sumOfThreeDigit(a) << endl;
    return 0;
}
