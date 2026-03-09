// desending Order bubble or basic sorting algorithum

#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[] , int n ){

    // {6, 3, 2, 8, 7, 4, 5, 3, 1, 1};
    // {4, 3, 2, 1 };

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);          
            }

        }
        
    }

    printArr(arr , n);
}




void selectionSort(int arr[] , int n){

    for (int i = 0; i < n-1; i++){

        int minIdx = i;

        for (int j = i+1; j < n; j++){

            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }

            swap(arr[i],arr[minIdx]);
        }
        
    }
    printArr(arr ,n);
}







void insertSort(int arr[] , int n){

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int prev = i-1;

        while (prev >=0 && arr[prev]>curr)
        {
            swap(arr[prev],arr[prev+1]);
        }
        arr[prev+1] = curr;
    }
    

    printArr(arr , n);
}

void countingSort(int arr[], int n){
    int freq[10000];
    int minval = INT16_MAX , maxval = INT16_MIN;
    for (int i = 0; i < n-1; i++)
    {
        minval = min(minval , arr[i]);
        maxval = max(maxval ,arr[i]);
    }
    
    // 1st step - 0(n)
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // 2nd step - 0(range)
    for (int i = minval , j = 0 ; i < maxval; i++)
    {
        while (freq[i]>0)
        {
            arr[j++] = i;
            freq[i]--;
        }
        
    }
    
    
    printArr(arr , n);
}


int main() {

    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);
    
    // inbuilt method --by using import inbluid method 

    // ascending order 
    // sort(arr , arr+n);

    // desending order 
    // sort(arr ,arr+n , greater<int>());
    // printArr(arr , n);
    bubbleSort(arr , n);
    // selectionSort(arr , n);
    // insertSort(arr , n);
    // countingSort(arr , n );
    
    return 0;
}