#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *fun()
//Write a function which will return a pointer of type Rectangle
{
    struct Rectangle *p;
    p=new Rectangle;
    //Create an Object of type Rectangle on Heap memory
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;

    return p;
    //return address (pointer)

}


int main()
{
    struct Rectangle *ptr=fun();
    cout<<"Length:"<<ptr->length<<endl<<"Breadth:"<<ptr->breadth;
    return 0;
}


//Returning a Pointer to a structure