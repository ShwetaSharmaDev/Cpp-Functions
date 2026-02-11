#include <iostream>
using namespace std;

class student {
    public:
    string firstname;
    string lastname;

    void hello(){
        cout<<"hello world";
    }
};

int main() {

    student s1;
    s1.firstname = "laxmi";
    s1.lastname = "parshad";
    cout<<s1.firstname<<endl;
    cout<<s1.lastname<<endl;
    s1.hello();

    student s2;
    s2.firstname = "mounty";
    s2.lastname = "panwar";

    cout<<s2.firstname<<endl;
    cout<<s2.lastname<<endl;
    s2.hello();

    
    
    return 0;
}