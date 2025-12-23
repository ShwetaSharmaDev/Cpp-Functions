#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 != 0) {
        cout << "It's not a leap year" << endl;
    }
    else if (year % 100 != 0) {
        cout << "It's a leap year" << endl;
    }
    else if (year % 400 == 0) {
        cout << "It's a leap year" << endl;
    }
    else {
        cout << "It's not a leap year" << endl;
    }

    return 0;
}