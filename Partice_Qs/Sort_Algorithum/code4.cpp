// counting sort 
// time complexcity = O(n + range)

#include <iostream>
#include <climits>
using namespace std;

void print(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void countSort(int arr[], int n) {
    
    int freq[100000];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }

    // 1st step 
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //2nd step
    for(int i = minVal, j=0; i <= maxVal; i++)
    {
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    print(arr , n);
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3,4,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    countSort(arr, n);
    print(arr , n);
    return 0;
}