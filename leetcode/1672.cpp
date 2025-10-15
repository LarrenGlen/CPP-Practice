#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int max = 0; 

        for(int i = 0; i < n; i++) {
            int wealth = 0;
            for(int j = 0; j < m; j++) {
                wealth += accounts[i][j];
            }

            if(wealth > maxWealth) {
                max= wealth;
            }
        }
        return max;
    }
};

// used a test case as an example to short write the code
int main() {
    Solution sol;
    vector<vector<int>> accounts = {{1,2,3}, {3,2,1}};
    cout << sol.maximumWealth(accounts) << endl; 
    return 0;
}
