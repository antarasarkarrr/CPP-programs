/*@Author:Antara Sarkar
@Desc:Find the sum of all prime number in an array in C++
@Program name:Find the sum of all the prime numbers present in array. If not exists print “No 
Prime Numbers Present”.
@Date:14.03.24
@Time complexity:O(n^2)*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int sum =0;
    for (int i=0;i<5;i++)
    {
        int c=0;
        for (int j=1;j<=arr[i];j++)
        
        {
            if (arr[i]%j==0)
                c=c+1;
        }
        if (c==2)
            sum=sum+arr[i];
    }
    if (sum==0)
        cout<<"No Prime Numbers Present"<<endl;
    else
        cout<<"SUM OF THE PRIME NUMBERS IN THE ARRAY:"<<sum<<endl;
    return 0;
}