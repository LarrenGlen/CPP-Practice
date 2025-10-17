

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign=1;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) return 0;
            if(nums[i]<0) sign= -sign;
        }
        return sign;
    }
};

// This version has a potential LOGIC ERROR due to overflow
int arrayLogicError(vector<int>& nums) {
    int prod = 1;  // overflow 
    for (int i = 0; i < nums.size(); i++) {
        prod *= nums[i];
    }

    if (prod == 0) return 0;
    else if (prod < 0) return -1;
    else return 1;
}

int main()
{
    Solution sol;
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    
    vector<int> nums(n);
    cout<<"enter the "<<n<<" values to be stored in an array "<<endl;
    for(int i=0;i<n;i++)
    {cin>> nums[i];}

    int result= sol.arraySign(nums);

    if(result>0)
    {cout<<"the product of the array is positive"<<endl;}
    if(result<0)
    {cout<<"the product of the array is negative"<<endl;}
    if(result==0)
    {cout<<"the product of the array is 0"<<endl;}

    return 0;
}