#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum;
        while (num >= 10) {
            sum = 0;
            while (num > 0) {
                int r = num % 10;
                num = num / 10;
                sum += r;
            }
            num = sum;
        }
        return sum;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Solution sol;
    int result = sol.addDigits(num);

    cout << "The result of repeatedly adding digits is: " << result << endl;

    return 0;
}

