// ARmstrong number 

/* Number,Digits,Calculation,Is Armstrong?
153 ->3,1³ + 5³ + 3³ = 1 + 125 + 27 = 153,Yes
370 ->3,3³ + 7³ + 0³ = 27 + 343 + 0 = 370,Yes
371 ->3,3³+ 7³ + 1³ = 27 + 343 + 1 = 371,Yes
407 ->3,4³ + 0³ + 7³ = 64 + 0 + 343 = 407,Yes
1634 ->,4,1⁴ + 6⁴ + 3⁴ + 4⁴ = 1 + 1296 + 81 + 256 = 1634,Yes
9474 ->,4,9⁴ + 4⁴ + 7⁴ + 4⁴ = 6561 + 256 + 2401 + 256 = 9474,Yes */
#include <iostream>
using namespace std;
int main() {

    int num;
    cin>>num;

    int arm = 0;

    for( ; num!=0; ){
        int temp = num%10;
        arm = tem

        num /= 10;
    }
    return 0;
}