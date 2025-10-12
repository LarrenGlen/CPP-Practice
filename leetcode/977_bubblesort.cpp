#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        for(int a = 0; a < n; a++) {
            nums[a] = nums[a] * nums[a];
        }

        // Bubble sort
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(nums[j] > nums[j+1]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sol.sortedSquares(nums);

    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

//more runtime solution 