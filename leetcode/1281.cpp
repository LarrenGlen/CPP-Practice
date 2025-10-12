#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0, r;

        while (n > 0) {
            r = n % 10;
            n = n / 10;
            product *= r;
            sum += r;
        }
        return product - sum;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;              // input number
    cout << s.subtractProductAndSum(n) << endl; // output result
    return 0;
}  