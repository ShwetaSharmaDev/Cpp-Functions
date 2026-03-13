#include <iostream>
using namespace std;

int max_two(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "The maximum of " << num1 << " and " << num2 << " is: "
         << max_two(num1, num2) << endl;

    return 0;
}
