// max subarray sum 


// brute force approch 
#include <iostream>
using namespace std;

int maxSubarraySum1(int arr[], int n) {
    
     for(int start=0; start< n ; start++){
        for(int end = start; end < n; end++){
            int currSum = 0;
            
            for(int i =start; i <=end; i++){
                currSum += arr[i]; 
            }
            cout<<currSum<<",";
        }

        cout<<endl;
     }
    
     return 0 ;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum1(arr, n);
    return 0;
}