#include<stdio.h>
#include<iostream>

using namespace std;

int main () {
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    // int A[n]={13,2,3,5,7,9,65,9}; Variable sized array cannot be initialized
    int A[n];
    A[0]=3;
    A[1]=10;

    // if we don't assign it will return all garbage values, also specify the size n, as per the number of elements you want to assign, if we eneter size as 7, and assign only 2 elements, other 5 elements will be of garabge values. 

    for (int x:A)

    {
        cout<<x<<endl; 
    }

    // int A[5];
    // A[0]=13;
    // A[1]=2;
    // A[2]=3;
    // int i;
    // for (int i=0; i<5; i++)
    // {
    //     cout<<A[i]<<endl;
        // cout<<A[8]<<endl;

        // cout<<A[3]<<endl;
        // cout<<sizeof(A)<<endl; size of A=20; Current Compiler

        // printf("%d\n", A[9]);
        // printf("%d\n", A[3]);
    // }
    return 0;
}