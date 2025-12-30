#include <iostream>
using namespace std;

void DecToBin(int DecNum){
    int BinNum = 0;
    while(DecNum > 0){
        int rem = DecNum%2;
        BinNum = (BinNum * 10) + rem;
        DecNum /=2;
    }
    cout<<BinNum<<endl;
}

int main() {

    DecToBin(25);
    DecToBin(49);
    DecToBin(31);
    DecToBin(88);
    
    return 0;
}