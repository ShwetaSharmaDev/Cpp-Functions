// Max water capcity

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();

    int maxWater = 0;
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int width = high - low;
        int minHeight = min(height[low], height[high]);
        maxWater = max(maxWater, width * minHeight);

        if (height[low] < height[high])
            low++;
        else
            high--;
    }
    return maxWater;
}

int main()
{

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);

    return 0;
}