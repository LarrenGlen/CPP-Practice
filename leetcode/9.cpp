#include <iostream>
using namespace std;

class error {
public:
    bool isPalindromerun(int x) {
//runtime error
        int r=0,pal=0;
        int temp=x;

        if(x==0) return false;
        if(temp>0)
        {
            while(temp>0)
            {
                r=temp%10;
                temp/=10;
                pal=pal*10+r;
            }
            if(pal==x) return true;
            else return false;
        }

        else return false; 
    }
};

class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0 || (x%10==0 && x!=0)) return false;

        int reversedhalf=0;
        while(x>reversedhalf)
        {
            reversedhalf= reversedhalf*10 + x%10;//stops midway coz of the while condition
            x/=10;
        }

        if(x==reversedhalf || x==reversedhalf/10) return true;//even and odd removes the odd in secod codtion
        else return false;
    }
};

int main()
{
    Solution sol;
    int x;
    cout<<"enter a number "<<endl;
    cin>>x;

    bool result = sol.isPalindrome(x);
    cout<<"the given number is a pallidrome :"<<(result==0 ?"false":"true")<<endl;
    return 0;
}