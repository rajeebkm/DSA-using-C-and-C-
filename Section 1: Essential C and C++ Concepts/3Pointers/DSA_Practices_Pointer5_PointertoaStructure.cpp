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

struct Rectangle r={10,5};
struct Rectangle *p=&r;
//pointer doesn't take all the size of members (8 bytes), only take 4 bytes
r.l=15;
//normal variable, dot operator
//To access the mebers in r
(*p).l=56;
//dot operator has higher preferences, so bracket used.
//or, 
p->l=56;
//pointer variable, arrow is used
cout<<"Area is:"<<" "<<r.l*r.b<<endl;
cout<<"Area is:"<<" "<<p->l*p->b;





return 0;

}

//size of pointer is independent of data types