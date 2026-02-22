// template function -> using this kind of structor help to manuplation of data while using to that problem to solve for any kind of data operation to analysis to find a production to various of the type of you can't handle for me ...
#include <iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>

class stack{
    vector<T> vec;
    public:
    void push(T val){
        vec.push_back(val);
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty";
            return;
        }
        vec.pop_back();
    }

    T top(){
        
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main() {

        // stack<int>s;
        // s.push(3);
        // s.push(2);
        // s.push(1);

        // stack<char> s;
        // s.push('c');
        // s.push('b');
        // s.push('a');

        stack<string> s;
        s.push("COW");
        s.push("BOY");
        s.push("TOY");


        

        while(!s.isEmpty()){
            cout<<s.top()<<" ";
            s.pop();
        }

        cout<<endl;
    
    return 0;
}