#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number == 0){
        cout << "Neither" << endl;
    }else if (number % 2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }

    return 0;
}