#include <iostream>
#include <string>
#include <vector>
using namespace std;

class heap{
    vector<int > vec; //CBT
    public:

    // push function 
    void push(int val){ //0(logn)
        // step 1
        vec.push_back(val);

        // fix heap 
        int x = vec.size() - 1; // child
        int parentIdx = (x-1)/2;

        while(parentIdx >=0 && vec[x] > vec[parentIdx]){
            swap(vec[x] , vec[parentIdx]);
            x = parentIdx;
            parentIdx = (x-1)/2;
        }
    }

    // heapify function 
    void heapify(int i){
        if(i >= vec.size()){
            return;
        }
        
        int l = 2*i+1; 
        int r = 2*i+2;

        int maxI = i;

        if(l < vec.size() && vec[l] > vec[maxI]){
            maxI = l;
        }

        if(r < vec.size() && vec[r] > vec[maxI]){
            maxI = r;
        }

        swap(vec[i] , vec[maxI]);
        if(maxI != i){ //swapping with child node
            heapify(maxI);
        }

    }


    // pop function 
    void pop(){
         //step1
         swap(vec[0] , vec[vec.size()-1]);

         //step2
         vec.pop_back();

         //step3
         heapify(0); //0(logn)
    }
    

    // Top function 
    int top(){ //0(1)
        return vec[0]; //higher priority element
    }

    // empty function 
    bool empty(){
        return vec.size() == 0;
    }
};

int main() {

    heap hp;
    hp.push(8);
    hp.push(4);
    hp.push(5);

    while(!hp.empty()){
        cout<<"top = "<<hp.top()<<endl;
        hp.pop();
    }
    
    
    return 0;
}