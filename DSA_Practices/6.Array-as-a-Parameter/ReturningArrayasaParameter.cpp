#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

// int [] fun(int n)
int * fun(int n)
//* RETURNING POINTER
//[] ARRAY OF ELEMENT
//Function Returning array as a parameter that is created in the Heap memory by the pointer. int []
{

int *p;
p=(int *)malloc(n*sizeof(int));
//p=new int[n];
for (int i=0; i<n; i++)
p[i]=i+1;
return (p);

}


int main(){
int *A, size=5;
A=fun(size);
for (int i=0;i<size; i++)
cout<<A[i]<<endl;


//a , b are actual parameters
// We are reducing the workload from the main function, that's y other functions do the task and called in main function. 
// printf("The value of A is: %d " , A);


return 0;

}
//here actual parameters remain same, but formal parameters are modified in the swap function. It's not returning anything, actual parameters remain same as a=10, b=20, but formal parameters x=20, y=10 by swap function.
//In Callby value, any changes happened to formal parameters will not reflect in actual parameters.
//PassbyValue will be used, when function returns something which reflect in actual parameters like adding two numbers, not suitable for swapping two numbers.
//Returns some result like adding two numbers and find maximum number, checking number is pallindrome or not etc.