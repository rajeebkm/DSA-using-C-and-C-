#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;


void swap (int &x, int &y){
    //x,y are formal parameters
    // x and y are referencing to a and b respectively, doen't consume extra memory. Allias of a and b.

    int temp;
    temp=x;
    x=y;
    y=temp;
 //not returning anything, void type
}

int main(){
int a, b;
a=10;
b=20;
swap(a,b);

//a , b are actual parameters
// We are reducing the workload from the main function, that's y other functions do the task and called in main function. 
printf("The value of a and b are: %d " " %d ", a, b);


return 0;

}

//In PassbyReference, when formal parameters are manupulated, actual parameters are also modified. 
//One function cann't access members of other function, but here swap function access a and b from main function directly. If we
//see Swap is not a separate function , it's a part of main function, only one activation record of main function.
//Machine code of swap function is indirectly pasted in main function behave like monolithic program
//Machine code is monolithin though source code is procedural or modular. C++ allows this. SmallBy Reference for small function but not for complex logic like for loop etc.
//here actual parameters remain same, but formal parameters are modified in the swap function. It's not returning anything, actual parameters remain same as a=10, b=20, but formal parameters x=20, y=10 by swap function.
//In Callby value, any changes happened to formal parameters will not reflect in actual parameters.
//PassbyValue will be used, when function returns something which reflect in actual parameters like adding two numbers, not suitable for swapping two numbers.
