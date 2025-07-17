/*@Author:Antara Sarkar
@Desc:Printing Name,Age,City,Pin code using class in C++
@Program name:WAP to print your name, age and city and pin code on screen (Using Class).
@Date:14.03.24
@Time complexity:O(1)*/
#include<iostream>
using namespace std;
class Q1
{
    public:
        string name;
        string city;
        int age;
        int pin;
};
int main()
{
    Q1 q;
    q.age=20;
    q.city="Asansol";
    q.name="Antara Sarkar";
    q.pin=713304;
    cout<<"NAME:"<<q.name<<endl;
    cout<<"CITY:"<<q.city<<endl;
    cout<<"AGE:"<<q.age<<endl;
    cout<<"PIN CODE:"<<q.pin<<endl;
    return 0;
}

