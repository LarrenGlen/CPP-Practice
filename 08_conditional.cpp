
//perform type of calculations using switvh case


#include <iostream>
using namespace std;

int main()
{

    cout<<"menu\n"<<"1. ADD\n2. SUB\n3. DIVIDE\n4. MULTIPLY\n";

    int opt;
    cout<<"enter your choice ";
    cin>>opt;
    float a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;

    switch(opt)
    {
        case 1: c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a/b;
        break;
        case 4: c=a*b;
        break;
    }    

    cout<<"result: "<<c;

    return 0;
        
}
