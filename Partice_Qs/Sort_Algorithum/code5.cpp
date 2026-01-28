// inbulit fuction - sort 

#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1, 6, 3, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr , arr+n); //asscending sort
    sort(arr , arr+n , greater<int>()); //descending sort
    print(arr , n);
    return 0;
}