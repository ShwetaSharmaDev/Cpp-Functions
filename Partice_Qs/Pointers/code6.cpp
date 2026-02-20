#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 1;
    int user_value = 5;

    int fib = 0;

    for (int i = 1; i <= user_value; i++)
    {
        if(i == 1)
        {
            fib = num1;
        }
        else if(i == 2)
        {
            fib = num2;
        }
        else
        {
            fib = num1 + num2;
            num1 = num2;
            num2 = fib;
        }

        cout << fib << " ";

    }

    return 0;
}