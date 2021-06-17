Q. Given an array of n numbers, write a program to find the element which appears the maximum
number of times in the given array? Your program must be constrained with following constraints:
Constraint 1: extra space is not a constraint, i.e. unlimited extra space, and Constraint 2: you can use
extra space of O(1).


//using hashing approach
#include<iostream>
using namespace std;


int main()
{
    int arr[20];
    int n;
    cout<<"Enter the size of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }

    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }
    int max=-1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]){
            max=arr[i];
            ans=i;
        }
    }

    cout<<"maximum repeating element :"<<ans;


}
