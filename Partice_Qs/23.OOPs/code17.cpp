#include <iostream>
using namespace std;

class parent{
    public:
    string eyecolor;
    string hair;

    void surename(){
        cout<<"surename";
    }
};

class child: public parent{

};

int main() {

    child c1;
    cout<<c1.eyecolor<<endl;
    cout<<c1.hair<<endl;
    
    
    return 0;
}