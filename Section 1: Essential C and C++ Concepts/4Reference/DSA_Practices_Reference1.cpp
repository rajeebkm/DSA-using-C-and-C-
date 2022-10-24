#include<stdio.h>
#include<iostream>

using namespace std;




int main(){

int a=10;
//variable, nothing is given, * for pointer, & for reference to a variable.
int &r=a;
//reference: & before a variable name, declaration
//iniatize with a, it must be initialized
//later we cann't change the refernec, it's always a, later assignment to some other variavle is not equal to initialisation
//two names for the same value 10, a and r are same. a itself called as r. address of a and r are same.

// int b=25;
// r=b;

cout<<a<<endl;
//10
r++;
// 11
cout<<r<<endl;
//11
cout<<a<<endl;
// 11


a=45;

cout<<a<<endl<<r<<endl;
//a and r are both same as 45
r=56;
cout<<a<<endl<<r<<endl;
//a and r are both same as 56

//reference doesn't consume memory, it just the another name, it's not like an pointer

//constant pointer is different in C++




return 0;
// A return 0 means that the program will execute successfully and did what it was intended to do. 
// return 0' means that the function doesn't return any value. It is used when the void return type is used with the function. It is not mandatory to add a 'return 0' statement to the function which doesn't return any value, the compiler adds it virtually.
}
