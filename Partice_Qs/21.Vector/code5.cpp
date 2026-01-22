// Martix of 2D vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> martix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    for (int i = 0; i < martix.size(); i++)
    {
        for (int j = 0; j < martix[i].size(); j++)
        {
            cout << martix[i][j];
        }
        cout << endl;
    }

    return 0;
}