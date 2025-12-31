#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 5};

    for (int i = 0; i < nums.size(); i++)
    {
        if (i + 1 != nums[i])
        {
            cout << nums[i] << i+1;
        }
    }
    return 0;
}