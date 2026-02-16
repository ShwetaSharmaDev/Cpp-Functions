#include <iostream>
using namespace std;
int main() {

    int *arr = new int[5];
     arr[0] = 9;
    
    cout<<"After : " << *arr <<endl;

    delete[] arr;
    
    cout<<"Before : "<< *arr <<endl;

    return 0;
}