// Cost of three item total and gst 

#include <iostream>
using namespace std;
int main() {

    float penCost , pencilCost , eraserCost;

    cin >> penCost;
    cin >> pencilCost;
    cin >> eraserCost;

    // total cost 
    float totCost = penCost + pencilCost + eraserCost;cout<<"total="<<totCost<<endl;

    // with gst 
    cout<<"totalwithGST="<<(totCost+(0.18*totCost))<<endl;
    return 0;
}