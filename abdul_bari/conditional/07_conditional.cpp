
//day using switch case using day no

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"eter the day no";
    cin>>day;

    switch (day)
    {
        case 1:cout<<"monday\n";
        break;
        case 2:cout<<"tuesday\n";
        break;
        case 3:cout<<"wednesday\n";
        break;
        case 4:cout<<"thursday\n";
        break;
        case 5:cout<<"friday\n";
        break;
        case 6:cout<<"saturday\n";
        break;
        case 7:cout<<"sunday\n";
        break;

        default:cout<<"invalid day\n";
        break;
    }
    

    return 0;
        
}
