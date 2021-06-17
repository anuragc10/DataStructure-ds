Q. Given an array of n numbers, write a program to find the first element in the array which is
repeated. For example, in the array A = {3,2,1,2,2,3}, the first repeated number is 3 (not 2).

//using hashing
#include<iostream>
using namespace std;


int main()
{
    int arr[20];
    int arrnew[20];
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
        arrnew[i]=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }



    cout<<"First repeated element: "<<endl
    for(int i=0;i<n;i++)
    {
        if(arr[arrnew[i]]>=n*2){
            cout<<arrnew[i];
            break;
        }
    }




}
