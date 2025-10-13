#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int x = 0, y = 0;

        for(int i = 0; i < n; i++) {
            x += nums[i]; 
            int j = nums[i];
            while(j > 0) { 
                y += j % 10;
                j /= 10;
            }
        }

        return abs(x - y);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> nums[i];

    int result = sol.differenceOfSum(nums);
    cout << "Difference of sum and digit sum: " << result << endl;

    return 0;
}
