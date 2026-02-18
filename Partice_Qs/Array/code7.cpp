#include <iostream>
#include <string>
using namespace std;

int longsubString(string str){

   int n = str.length();
   int maxcount = 0;
   int checkout = 0;
    for(int i= 0 ; i < n; i++){
        for(int j = i+1 ; j < n ; j++){
            if(str[i] == str[j]){
                break;
            }
            else{
                maxcount++;
            }
        }
    if(maxcount > checkout){
        checkout = maxcount;
    }
        maxcount = 0;
    }
        return checkout;
}

int main() {

    string str1 = "pwwkew";
    cout<< longsubString(str1);
    
    return 0;
}