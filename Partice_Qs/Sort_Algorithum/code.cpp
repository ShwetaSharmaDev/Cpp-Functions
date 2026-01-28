// Bubble sort 
// insert sort
// selection sort 
// counting sort


#include <iostream>
using namespace std;

void print(int arr[], int n){
    
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void BubbleSort(int arr[], int n) {
    bool swapCount = false;
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j] > arr[j+1])  
            {
                swap(arr[j], arr[j+1]);
                swapCount = true;
            }
            
        }

        if(!swapCount){
            return;
        }

    }
    print(arr , n);
}

int main() {
    int arr[] = {4, 5, 3, 6, 5};
    // int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);
    return 0;
}


// Time complexcity = O(n^2)