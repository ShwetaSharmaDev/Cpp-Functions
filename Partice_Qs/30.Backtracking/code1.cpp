/* 
0 size = " " 0 null set called fi
1 size = a ,b,b
2 size  = ab , bc, ac
3 size  = abc 

string formula  = z^n


approach => depend on choice of element if a have 2 option they were goes forward if they choice other side they were not goes to under a code ...

all posible solution find in backtracking first ...


approach - subset(sting str , string subset ){

}
*/
#include <iostream>
#include <string>
using namespace std;


void printSubsets(string str , string subset){

    if(str.size() == 0){
        cout<<subset<<"\n";
        return;
    }

    char ch =  str[0];

    // yes chocie 
    printSubsets(str.substr(1, str.size()-1),subset+ch);

    // no chocie 
    printSubsets(str.substr(1,str.size()-1), subset);
}

int main() {

    string str = "abc";
    string subset = "";
    
    printSubsets(str , subset);
    return 0;
}