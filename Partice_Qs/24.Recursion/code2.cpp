#include <iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int> nums){
    int ans = 0;

    for(int i=0 ; i< nums.size(); i++){
            ans += nums[i];
    }
    return ans;
}

int main() {

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout<<maxSubArray(nums);
        return 0;
}