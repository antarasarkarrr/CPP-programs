/*@Author:Antara Sarkar
@Desc:Finding the area of a rectangle in C++
@Program name:Write a program to print the area of a rectangle by creating a class named 
'Area' having two functions. First function named as 'setDim' takes the length 
and breadth of the rectangle as parameters and the second function named as 
'getArea' returns the area of the rectangle. Length and breadth of the rectangle 
are entered through keyboard. 
@Date:14.03.24
@Time complexity:O(1)*/
#include<iostream>
using namespace std;
class area
{
    public:
        int l,b;
        void setDim()
        {
            cout<<"enter the length of the rectangle:";
            cin>>l;
            cout<<"enter the breadth of the rectangle:";
            cin>>b;
        }
        int getArea()
        {
            return l*b;
        }
};
int main()
{
    area a;
    a.setDim();
    cout<<"The area of the rectangle is:"<<a.getArea()<<endl;
    return 0;
}