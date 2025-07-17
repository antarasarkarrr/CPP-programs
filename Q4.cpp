/*@Author:Antara Sarkar
@Desc:Demnostrating ATM money withdrawal and deposit process uisng C++
@Program name:Write a C++ program to demonstrate ATM money withdrawal and deposit 
process by taking following private data members: Accountno, balance; Account 
no and balance data member initialize using parameterized constructor Write 
three function 
1. Deposit 2. Withdraw 3. Balance 
Write menu driven choice 
1. Deposit
2. Withdraw 
3. Balance
4. Exit Program stop execution when user enter choice 4
@Date:14.03.24
@Time complexity:O(1)*/
#include<iostream>
using namespace std;
class ATM
{
    private:
        long long acn, bal;
    public:
        ATM(long long ac,long long b)
        {
            this->acn=ac;
            this->bal=b;
        }
        void deposit()
        {
            int dep;
            cout<<"Enter the deposit amount:";
            cin>>dep;
            bal=bal+dep;
        }
         void withdrawal()
        {
            int wit;
            cout<<"Enter the withdrawal amount:";
            cin>>wit;
            bal=bal-wit;
        }
         void balnce()
        {
            cout<<"The balance:"<<bal<<endl;
        }
};
int main()
{
    long long a,b;
    int ch;
    cout<<"Enter the Account no.:";
    cin>>a;
    cout<<"Enter the Balance no.:";
    cin>>b;
    ATM o(a,b);
    cout<<"Enter 1.To deposit\n2.To withdraw\n3.To see balance\n4.Exit"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            o.deposit();
            break;
        case 2:
            o.withdrawal();
            break;
        case 3:
            o.balnce();
            break;
        case 4:
            cout<<"EXIT!!"<<endl;
            break;
        default:
            cout<<"invalid choice";
    }
    return 0;
}