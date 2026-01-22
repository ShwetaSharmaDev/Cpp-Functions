#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec3(10, -1);

    cout << vec1.size() << '\n';
    cout << vec3.size() << '\n';
    return 0;
}