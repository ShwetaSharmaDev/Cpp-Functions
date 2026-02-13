/* friend class and function :

a friend class or a friend function can access and protected members of other classes in which it is declared as a friends

*/

#include <iostream>
using namespace std;

class A {
    string secret = "secret data";
    friend class B;
    friend void revealSecret(A &obj);
};

class B {
    public:
    void showsecret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revealSecret(A &obj){
    cout<< obj.secret<<endl;
}

int main() {

    A a1;
    B b1;
    
    // b1.showsecret(a1);

    revealSecret(a1);

    
    return 0;
}