#include <iostream>
using namespace std;

bool isEligibleToVote(int age){
    return age >= 18;
}

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (isEligibleToVote(age))
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
