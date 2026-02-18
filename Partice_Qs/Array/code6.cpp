#include <iostream>
using namespace std;

void function_name(){
    
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    // make a function while using swap inbuilt function to swap two elements of array

    for (int i = 0; i<5-i; i++) {
        swap(arr[i], arr[5-i-1]);
    }

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}