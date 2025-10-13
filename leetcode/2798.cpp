#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        int h = hours.size();

        for(int i = 0; i < h; i++) {
            if(hours[i] >= target)
                count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n, target;
    cout << "Enter number of employees: ";
    cin >> n;
    vector<int> hours(n);

    cout << "Enter hours worked by each employee: ";
    for(int i = 0; i < n; i++)
        cin >> hours[i];

    cout << "Enter target hours: ";
    cin >> target;

    int result = sol.numberOfEmployeesWhoMetTarget(hours, target);
    cout << "Number of employees who met target: " << result << endl;

    return 0;
}
