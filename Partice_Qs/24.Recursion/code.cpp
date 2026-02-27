// factorial number by using recursion

#include <iostream>
#include <vector>
using namespace std;

int fac(int n){
    if(n == 0){
        return 1;
    }
    return n * fac(n-1);
}

void decOrder(int n){
    if(n ==0){
        return;
    }

    cout<<n<<" ";
    decOrder(n-1);
}


void table(int n){
    if(n == 0){
        return;
    }
    table(n-1);
    cout<< 2* n<<endl;
}

int sumN(int n){
    if(n==0){
        return 0;
    }

    return n + sumN(n-1);
}

int fib(int n ){
    if(n == 0 || n == 1){
        return n;
    }

    return  fib(n-1)+ fib(n-2);
}

bool issorted(int arr[] , int n , int i){

    if(i == (n-1)){
        return true;
    }

    if(arr[i] > arr[i+1]){
        return false;
    }

    return issorted(arr , n , i++);
}

int firstOccur(vector<int> arr  , int i, int target){

    if(i == arr.size()){
        return -1;
    }

    if(arr[i] == target){
        return i;
    }

    return firstOccur(arr , i+1 , target);
}

int lastOccur(vector<int>arr , int i , int target){

    if( i == arr.size()){
        return -1;
    }

    int idxFound = lastOccur(arr , i+1 , target);

    if(idxFound == -1 ){
        if(arr[i] == target){
            return i;
        }
    }

    return idxFound;
}

int pow()
int main() {

    // cout<<fac(5);
    // decOrder(5);
    // table(10);
    // cout<<sumN(5);
    // cout<<fib(5);
    // int arr[5] = {1,2,3,4,5};
    // int arr2[5] = {1,2,4,3,5};
    // cout<<issorted(arr , 5, 1);

    // vector<int> arr = {1,2,3,4,5,6};
    // cout<<firstOccur(arr , 1 , 4);

    // vector<int> arr = {1,2,3,4,4,4,5,6};
    // cout<<lastOccur(arr , 1 , 4);



    return 0;
}