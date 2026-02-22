// STL ke andar jitne be function pass hote hai vo pass by value pass hote hai jaise vector , list , stack ..

#include <iostream>
using namespace std;
#include<stack>

void pustAtBottom(stack<int> &s , int val){
    if(s.empty()){
        s.push(val); //push at top =  push at bottom
        return;
    }

    int temp = s.top();
    s.pop();
    pustAtBottom(s ,val);
    s.push(temp);
}
int main() {

    stack<int> s ;
    s.push(3);
    s.push(2);
    s.push(1);

    pustAtBottom(s,4);
    while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    
    return 0;
}