#include <iostream>
using namespace std;
int main() {

    int income = 8;
    float tax;

    if(income < 5){
        tax = 0;
        cout<<tax;
    }else if(income >= 5 && income <= 10){
        tax = income * .2 ;
        cout<<tax;
    }else if(income > 10){
        tax = income * .3 ;
        cout<<tax;
    }
    
    cout<<"Tax = "<<(tax * 100000)<<endl;
    return 0;
}