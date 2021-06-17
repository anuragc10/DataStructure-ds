Q. You have been given an array of n numbers. Write a program to check whether there are any
duplicate elements in the given array or not with following constraints: Constraint 1 - extra space is
not a constraint, i.e. unlimited extra space, and Constraint 2 - you can use extra space of O(1).

#include<iostream>
using namespace std;

//using hash map



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

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=n*2)
        {
            cout<<"YES it contains a duplicate element(s): ";
            cout<<i<<endl;
        }
    }




//array after
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
