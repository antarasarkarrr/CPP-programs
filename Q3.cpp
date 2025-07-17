/*@Author:Antara Sarkar
@Desc:Printing the employee biodata uisng C++
@Program name:C++ program to create a class for Employee to get and display following 
Employee information: Empcode, Basicsalary Write member function to 
calculate Net salary, DA=17.4% of Basic salary, HRA=10% of Basic salary, TA=500 ,
Income tax=5 % of basic salary, if basic salary<50000 Income tax=0, if Basic 
salary >=50000 Netsalary=(basicsalary+da+hra+ta) - income tax .
@Date:14.03.24
@Time complexity:O(1)*/
#include<iostream>
using namespace std;
class Employee
{
    public:
        string empcode;
        int bsalary;
        double nsalary(int bs)
        {
            double da,hra,it;
            int ta=500;
            da=(17.4/100)*bs;
            hra=(10/100)*bs;
            if (bs<50000)
                it=0.0;
            if (bs>=50000)
                it=(5/100)*bs;
            return ((bs+da+ta+hra)-it);
        }
};
int main()
{
    Employee e;
    cout<<"Employee Code:";
    cin>>e.empcode;
    cout<<"Basic Salary:";
    cin>>e.bsalary;
    cout<<"Net Salary:"<<e.nsalary(e.bsalary);
    return 0;
}