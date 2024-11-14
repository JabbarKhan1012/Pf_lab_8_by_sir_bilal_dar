#include<iostream>
using namespace std;
int main()
{
    int balence=1000,payment_methood,deposit,withdrawal_amount;
    cout<<"1. Deposit\n 2. Withdraw\n 3. check balence \n 4.Exit"<<endl;
    cout<<"Enter your choice ::";
    cin>>payment_methood;
    switch (payment_methood)
    {
    case 1:
        cout<<"How much Amount you want to deposit";
        cin>>deposit;
        balence+=deposit;
        break;
    case 2:
        cout<<"How much amount you want to withdraw";
        cin>>withdrawal_amount;
        balence-=withdrawal_amount;
        cout<<"you have withdrawed "<<withdrawal_amount<<"amount"<<endl;
        break;
    case 3:
        cout<<"You have balence "<<balence<<endl;
        break;
    default:
        return 0;
        break;
    }
}