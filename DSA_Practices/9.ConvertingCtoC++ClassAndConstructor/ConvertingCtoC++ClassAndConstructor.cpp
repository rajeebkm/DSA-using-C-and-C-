#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;


class Rectangle
{
    private:
    int length;
    int breadth;
//Data members

public:

//Functions
// void initialize(int l, int b)
Rectangle (int l, int b)
//Constructor, automatically called when object is created, same name as class name, does the work of inialisation
{
length=l;
breadth=b;
//directly acessing length and breadth
}

int area()
{
    return length*breadth;
}

void changelength(int l1)
{
    length=l1;
}
int main()
{
    Rectangle r(10,5);
    //Object Rectangle, instead of variable called Object
    // r.initialize(10, 5);
    //Present inside the class, no need to pass or reference, Earlier Inialize function was taking the rectangle as parameter, now it's a part of Rectangle
    //These are member function of the Object rectangle
    r.area();
    r.changelength(25);
    cout<<"Area:"<<r.length*r.breadth<<endl;


}

};

//This type of programming leads to object orientation
//C language, structure and Function
//all the functions are related to that structure