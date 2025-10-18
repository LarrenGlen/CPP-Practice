#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {

        if(nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0])
        {
            if(nums[0]==nums[1] && nums[1]==nums[2] ) return "equilateral";
            if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]) return "isosceles";
            else return "scalene";
        }

        else return "none";
        
    }
};

int main()
{
    Solution sol;

    vector<int> nums(3);
    cout<<"enter the 3 elements in an array "<<endl;
    for(int i=0;i<nums.size();i++)
    { cin>>nums[i];}

    string result= sol.triangleType(nums);
    cout<<"the triangle type is :"<<result<<endl;
    return 0; 

}