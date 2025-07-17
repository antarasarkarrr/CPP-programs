/*@Author:Antara Sarkar
@Desc:Find the sum of third largest element and second smallest element in an 
array in C++
@Program name:Find the sum of third largest element and second smallest element in an 
array
@Date:14.03.24
@Time complexity:O(nlogn)*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={11,72,13,14,95};
    int sum=0;
    int size=sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    sum=arr[size-3]+arr[1];
    cout<<"the sum of third largest element and second smallest element in the array:"<<sum<<endl;
    return 0;
}