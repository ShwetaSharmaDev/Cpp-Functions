// heap / priority queue 
// by using STL - libaraies...
#include <iostream>
#include<queue>

using namespace std;
int main() {

    priority_queue<int > pq;
    
    pq.push(34);
    pq.push(32);
    pq.push(33);
    pq.push(36);
    pq.push(37);

    while(!pq.empty()){

        cout<<"top : "<<pq.top() <<endl;
        pq.pop();
    }
    
    return 0;
}
