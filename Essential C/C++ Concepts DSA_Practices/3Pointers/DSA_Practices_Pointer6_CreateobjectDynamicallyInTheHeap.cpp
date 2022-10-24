#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//pointer to an array

struct Rectangle {
    int l;
    int b;  
};


int main(){


struct Rectangle *p;
//Created inside stack
//C++ compiler if we remove struct word, it will also work, but in C we have to use struct word mandatory

p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
// malloc returns void pointer, so we have to type cast
//Type casting refers to the conversion of one data type to another in a program. Typecasting can be done in two ways: automatically by the compiler and manually by the programmer or user. Type Casting is also known as Type Conversion.

// p=new Rectangle; C ++

p->l=10;
p->b=5;

cout<<"Area"<<" "<<p->l*p->b;

return 0;

}

//size of pointer is independent of data types