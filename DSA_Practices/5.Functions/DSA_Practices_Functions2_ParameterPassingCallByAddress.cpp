#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//In CallByAddress, addresses of actual parameters will be passed to formal parameters. Formal parameters must be pointer.

void swap (int *x, int *y){
    //x,y are formal parameters

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
 //not returning anything, void type
 //* is used for dereferencing, accessing value of the address a and b. x and y are point on a and b respectively.
//One function cann't access variable of other function directly, but
 //can access indirectly using pointers.
 //CallByAddress is suitable for modifying actual parameters like swapping numbers.
 //We don't have to return anything, some cases may return, directly work upon the actual parameteres, rather have to modify actual parameters
 }

int main(){
int a, b;
a=10;
b=20;
swap(&a,&b);

//a , b are actual parameters
// We are reducing the workload from the main function, that's y other functions do the task and called in main function. 
printf("The value of a and b are: %d " " %d ", a, b);


return 0;

}
//here actual parameters remain same, but formal parameters are modified in the swap function. It's not returning anything, actual parameters remain same as a=10, b=20, but formal parameters x=20, y=10 by swap function.
//In Callby value, any changes happened to formal parameters will not reflect in actual parameters.
//PassbyValue will be used, when function returns something which reflect in actual parameters like adding two numbers, not suitable for swapping two numbers.