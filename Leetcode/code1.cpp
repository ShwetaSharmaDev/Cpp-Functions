#include <iostream>
using namespace std;

bool isPrime(int i)
{
    bool checkPrime = true;
    if (i == 1)
    {
        return checkPrime;
    }
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            checkPrime = false;
            break;
        }
    }
    return checkPrime;
}

void digit(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num;
    cout << "Enter a value : ";
    cin >> num;

    digit(num);
    return 0;
}
