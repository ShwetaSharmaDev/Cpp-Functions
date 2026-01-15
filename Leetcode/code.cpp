// Problem 109 - Palindorme
#include <iostream>
using namespace std;

int isPalindrome(int x)
{
    int temp = x, pal = 0;
    for (int i = 0; temp != 0; i++)
    {
        int rem = temp % 10;
        pal = (pal * 10) + rem;
        temp /= 10;
    }
     if (pal == x)
    {
        return true;
}

    return false;          
}
int main()
{
    int x = -121;
    cout << isPalindrome(x);
    return 0;
}