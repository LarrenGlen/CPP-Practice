#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int count=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]%2 != 0)
             count++ ;
            else count=0;
            if(count==3)
            return true;
        }
        return false;
    }
};

int main() 
{
    Solution sol;
    int n;
    cout<<"enter the number of elements to be stored in the array :"<<endl;
    cin>>n;
    
    vector<int> arr(n);
    cout<<"enter the "<<n<<" values "<<endl;
    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    bool result=sol.threeConsecutiveOdds(arr);
    cout<<"three consecutive odds present :"<<(result==0 ?"false":"true")<<endl;

    return 0;
    
}