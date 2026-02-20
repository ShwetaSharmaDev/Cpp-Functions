#include <iostream>
using namespace std;
int main()
{
    int a = 32;
    int *ptr = &a;
    cout << ptr;

    cout << *ptr;
    cout << "hello world";

    return 0;
}