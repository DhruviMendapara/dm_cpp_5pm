#include<iostream>
using namespace std;
class bank
{
    int balance;
    public:
    bank(int);
    void deposite(int);
    void withdraw(int);
    int showbalance();
 
};
bank::bank(int amt)
{
    balance=amt;
}
void bank::deposite(int amt)
{
    balance+=amt;
}
void bank::withdraw(int amt)
{
    balance-=amt;
}
int bank::showbalance()
{
    return balance;
}
int main()
{
    int amt,wd,n;
    bank dhruvi(200);
    cout<<"\n Current Balance:"<<dhruvi.showbalance();
    do
    {
        cout<<"\n 1 Deposite:";
        cout<<"\n 2 Withdraw:";
        cout<<"\n 3 total";
        cout<<"\n 0 exit:";
   
        cout<<"\nEnter choice:";
        cin>>n;
    switch(n)
    {
        case 1:
            cout<<"\nEnter Amount:";
            cin>>amt;
            dhruvi.deposite(amt);
            //cout<<"\n Total Balance:"<< dhruvi.showbalance();
            break;
        case 2:
            cout<<"\nEnter withdraw:";
            cin>>wd;
            dhruvi.withdraw(wd);
            //cout<<"\nTotal balance:"<<dhruvi.showbalance();
            break;
        case 3:
            cout<<"\nTotal Balance:"<<dhruvi.showbalance();
            break;
        case 0:
            exit(0);
    }
    n++;
    }while(n<=5);
}
