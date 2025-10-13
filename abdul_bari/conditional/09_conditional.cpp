
//program for the discounte amount 
#include <iostream>
using namespace std;

int main()
{
    float bill_amt,discount;

    cout<<"enter bill amount";
    cin>>bill_amt;

    if(bill_amt>=5000)
        discount=bill_amt*25/100;
    else if(bill_amt>=1000 && bill_amt<5000)
        discount=bill_amt*15/100;
    else if(bill_amt>=500 && bill_amt<1000)
        discount=bill_amt*10/100;
    

    cout<<"Bill amount is "<<bill_amt<<endl;
    cout<<"discount given "<<discount<<endl;
    cout<<"discounted price"<<bill_amt-discount;

    return 0;


}
