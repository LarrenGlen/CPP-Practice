
//loops for while, for and do
#include <iostream>
using namespace std;

int main()
{
    int i=0;
    while(i<=10)
    {
        cout<<i<<". hello"<<endl;
        i++;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int i=0;

    do
    {
        cout<<i<<". hello"<<endl;
        i++;
    }while(i<=10);

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<=10;i++)
    {cout<<i<<". hello"<<endl;}

    return 0;
}
