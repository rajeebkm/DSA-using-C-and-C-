#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//pointer to an array

int main(){

int A[5]={2,4,6,8,10};
int *p;
p=A;
//dont use & in case of array
//name of array, means starting address of array
//p=&A is wrong
// p=&A[0]; is right



// Access all the integer

for (int i=0; i<5;i++){
    cout<<A[i]<<endl;
    cout<<p[i]<<endl;
    //pointer acts as name of an array, in case of an array
}
return 0;

}