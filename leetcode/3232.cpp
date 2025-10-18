#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singled=0,doubled=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<10)
            singled+=nums[i];
            if(nums[i]>=10)
            doubled+=nums[i];
        }

        return singled != doubled;

        
    }
};

int main()
{
    Solution sol;
    int n;
    cout<<"enter the number of elements :"<<endl;
    cin>>n;

    vector<int> nums(n);
    cout<<"enter the "<<n<<" elements in an array "<<endl;
    for(int i=0;i<n;i++)
    { cin>>nums[i];}

    bool result=sol.canAliceWin(nums);
    cout<<"alice can win : "<<(result ? "true":"false")<<endl;
    return 0;
}