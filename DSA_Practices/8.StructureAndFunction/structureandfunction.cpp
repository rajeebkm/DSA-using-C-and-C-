#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;


struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r1, int l, int b)
{
r1->length=l;
r1->breadth=b;
}

int area(struct Rectangle r2)
{
    return r2.length*r2.breadth;
}

void changelength(struct Rectangle *r3, int l1)
{
    r3->length=l1;
}
int main()
{
    struct Rectangle r;
    initialize(&r, 10, 5);
    area(r);
    changelength(&r,25);
    cout<<"Area:"<<r.length*r.breadth<<endl;


}

//This type of programming leads to object orientation
//C language, structure and Function
//all the functions are related to that structure