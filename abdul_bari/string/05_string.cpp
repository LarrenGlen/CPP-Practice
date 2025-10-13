// string concatenation using str and strn 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    //strcat(destination,source)
    char s1[50]="";
    char s2[50]="world";

    // strcpy(s1,s2);
    // cout<<s1<<endl;

    strncpy(s1,s2,3);
    cout<<s1<<endl;
return 0;

}