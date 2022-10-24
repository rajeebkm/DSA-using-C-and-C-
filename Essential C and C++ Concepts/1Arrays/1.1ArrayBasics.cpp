#include<stdio.h>
#include<iostream>

using namespace std;

int main () {
    // int A[5]={13,2,3,5,7};
    // array declaraion
    int A[5];
    // array assignment
    A[0]=13;
    A[1]=2;
    A[2]=3;
    // array declaration and initialization
    int B[5]={13,2,3};  // B[3]=0, B[4]=0
    // array size depend on the elements initialized.
    int C[]={13,2,3,5,7,9,10}; // size = 7, size(C)=28
    // declarational and initialization with element 0
    int D[10]={0};
    int i;
    for (int i=0; i<5; i++)
    {
        cout<<A[i]<<endl;

        // we can use printf also
        // printf("%d\n", A[i]);
        // printf("%d\n", A[3]);
    }

    cout<<"A[3]: "<<A[3]<<endl; // garbage value in case of if there is no assignment, 0 in case of decalration and initialization having no element in that index.

    cout<<"B[3]: "<<B[3]<<endl; // 0
    cout<<"Size of A: " << sizeof(A)<<endl; // size of A=20; Interger: 4 bytes, Current Compiler
    cout<<"Size of C: " << sizeof(C)<<endl; // 28
    cout<<"D[3]: "<<D[3]<<endl; // 0
    cout<<"D[9]: "<<D[9]<<endl; // 0
    cout<<"D[10]: "<<D[10]<<endl; // garbage value
}