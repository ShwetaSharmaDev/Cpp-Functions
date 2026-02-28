#include <iostream>
using namespace std;

class A{
private:
    string secret = "secret data";
    friend class B;
};

class B{
public:
    void showSecret(A &add){
        cout << add.secret << endl;
    }
};

int main() {

    A a1;
    B b1;

    b1.showSecret(a1);

    return 0;
}