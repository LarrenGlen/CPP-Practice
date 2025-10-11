#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int org = num;
        while (num > 0) {
            int val = num % 10;
            if (val != 0 && org % val == 0) {
                count++;
            }
            num /= 10;
        }
        return count;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Solution sol;
    int result = sol.countDigits(num);

    cout << "The number of digits in " << num 
         << " that divide it is: " << result << endl;

    return 0;
}