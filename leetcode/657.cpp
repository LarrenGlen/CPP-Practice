#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
            int first=0,second=0;
            

        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='L') first++;
            else if(moves[i]=='R') first--;
            else if(moves[i]=='U') second++;
            else if(moves[i]=='D') second--;
        }
        //if(first==0 && second==0) return true;
       // else return false;
       
       return first==0 && second==0;
    }
};

int main()
{
    Solution sol;
    string moves;
    cout<<"enter the values the robot has to move from 'L','R','U','D' : "<<endl;
    cin>>moves;
    
    if(sol.judgeCircle(moves))
    cout<<"The Robot returns to origin "<<endl;
    else cout<<"Robot doesnt return to origin"<<endl;
    return 0;
}