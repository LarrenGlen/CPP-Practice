#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int step=0;
        while(num>0)
        {
            if(num%2==0)
            {num/=2;}
            else
            {num--;}
            step++;
        }
        return step;
    }
};

int main()
{
    Solution sol;
    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;

    int result=sol.numberOfSteps(num);
    cout<<"the number of steps required is :"<<result;
    return 0;
}