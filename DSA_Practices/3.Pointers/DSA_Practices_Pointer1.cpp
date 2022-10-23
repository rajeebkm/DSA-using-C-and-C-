#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

int a=10;
// data variables, suppose taking 2 bytes means addresses 200/201
int *p;
// address variable, declaration also takes 2 bytes (210/211)
p=&a;
// Initialisation of pointer, pointing to address of a
printf("%d\n", a);
printf("%d\n", *p);


//dereferencing 
//declaration and dereferencing *p is used (We use *), pointing to the value of that address
//Initialization don't use *
printf("%d, %d", p, &a);
// show address
// printf("%d", &a);
//whenever declared it will occupy the stack memory. 
//If we want to allocate memory in Heap, then we will use malloc() function in c language. malloc takes size. let compiler decide (operator sizeof(int) for that)

p=(int *)malloc(5*sizeof(int));

//c,typecasted, return void pointer, assigned to a pointer
p=new int[5];
//c++

return 0;

}