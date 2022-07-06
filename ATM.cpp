#include<iostream>
using namespace std;
int main()
{
    float amount,balance;
    cin>>amount>>balance;
    if(amount+0.5<=balance && int(amount)%5==0){
            balance-=(amount+0.5);
            cout<<balance;
    }
    else{
        cout<<balance;
    }
    return 0;
}