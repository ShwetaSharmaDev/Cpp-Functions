#include <iostream>
using namespace std;

void funInt()
{
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr;
    delete ptr;
}

void func()
{
    int size;
    cin >> size;

    int x = 1;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout << endl;

    delete[] arr;
    
}
int main()
{

    func();

    return 0;
}