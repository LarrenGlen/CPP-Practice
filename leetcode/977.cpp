#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0;i<n;i++) {
            nums[i]=nums[i]*nums[i];
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = sol.sortedSquares(nums);

    cout << "Sorted squares: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}