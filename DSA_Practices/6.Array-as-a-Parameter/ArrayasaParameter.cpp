#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

void fun(int A[ ], int n)
//this array A[ ] is basically pointer to an Array
//Array is passed by address not by value or reference
//n is Pass by value
// void fun(int *A, int n)
// *A integer pointer point on integer or any array
// A [] pointer to array only

//As it is call by address, we can modify the value in inside fun function.

{
// for(int a:A)
//We cannot use for each loop on a pointer but we can use upon an array
// cout<<a<<endl;


// cout<<sizeof(A)/sizeof(int)<<endl;

//here sizeof(A) takes size of pointer in void fun i.e 8 bytes, integer 4 bytes, so result is 2
// int i;

for (int i=0;i<n;i++)
printf("%d\n", A[i]);

// A[0]=25;
//as it's pointer(call by address), actual parameters will also be changed.




}


int main(){
int A[]={2,4,5,6,7};

int n=5;
fun(A,n);
// cout<<sizeof(A)/sizeof(int)<<endl;
for(int x:A)
cout<<x<<endl;
// fun(A, 5);


//a , b are actual parameters
// We are reducing the workload from the main function, that's y other functions do the task and called in main function. 
// printf("The value of A: %d ",A);


return 0;

}
//here actual parameters remain same, but formal parameters are modified in the swap function. It's not returning anything, actual parameters remain same as a=10, b=20, but formal parameters x=20, y=10 by swap function.
//In Callby value, any changes happened to formal parameters will not reflect in actual parameters.
//PassbyValue will be used, when function returns something which reflect in actual parameters like adding two numbers, not suitable for swapping two numbers.
//Returns some result like adding two numbers and find maximum number, checking number is pallindrome or not etc.