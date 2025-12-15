#include <iostream>
using namespace std;

int checkPalNum(int num)
{
    int result = 0;
    while (num != 0)
    {
        int temp = num % 10;
        result = (result * 10) + temp;
        num /= 10;
    }
    return result;
}

void printPalNum(int a)
{
    if (checkPalNum(a) == a)
    {
        cout << "it's a palindrome number";
    }
    else
    {
        cout << "it's not a palindrome number";
    }
}

int main()
{

    printPalNum(456);
    return 0;
}