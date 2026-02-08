// max subarray sum 


// lofic approch force approch 
#include <iostream>
using namespace std;

int maxSubarraySum1(int arr[], int n) {
    
    // int maxsum; // its give garbage value 
    int maxsum = INT8_MIN;
    int minsum = INT8_MAX;
     for(int start=0; start< n ; start++){
        for(int end = start; end < n; end++){
            int currSum = 0;
            
           
            cout<<currSum<<",";
            maxsum = max(maxsum , currSum);
            minsum = min(minsum , currSum);
            
        }

        cout<<endl;
    }
    cout<<"Maximum subarray sum = "<<maxsum;
    cout<<"\n";
    cout<<"Minimum subarray sum = "<<minsum;
     return 0 ;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum1(arr, n);
    return 0;
}