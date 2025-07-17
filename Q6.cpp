/*@Author:Antara Sarkar
@Desc:Find the sum of all element of an array in C++
@Program name:Find the sum of all element of an array.
@Date:14.03.24
@Time complexity:O(5)*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={11,72,13,14,95};
    int sum =0;
    for (int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"SUM OF THE ELEMENTS IN ARRAY:"<<sum;
    return 0;
}