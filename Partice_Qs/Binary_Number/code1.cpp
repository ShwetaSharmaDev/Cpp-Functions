#include <iostream>
using namespace std;

void DecToBin(int DecNum){
    int BinNum = 0;
    while(DecNum > 0){
        int rem = DecNum%2;
        BinNum = (BinNum * 10) + rem;
        DecNum /=2;
    }
    cout<<BinNum;
}

int main() {

    DecToBin(5);
    
    return 0;
}