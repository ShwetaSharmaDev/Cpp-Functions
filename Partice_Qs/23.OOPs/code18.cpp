#include <iostream>
using namespace std;

class student{
    string name;
    string last;
    int * ptr;

    public:
    int roll_number;
    ~student(){

        roll_number = 45;
        cout<<roll_number;
    }

    

    student(){
        roll_number = 25;
        cout<<roll_number<<endl;
        
    }

    

};



int main() {

    student s1;
    return 0;
}