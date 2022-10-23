#include<stdio.h>
#include<iostream>
// #include<stdlib.h>

using namespace std;
//both are same, struct and class
//If we write struct, all the members are public
//If we write class, all the members are private
class Rectangle
//  struct Rectangle
{
    public:
    //making mamber as public in case of class, act like a struct
    int length;
    int breadth;

// };

//Initialise by a separate function instead of main function

// void initialise(struct Rectangle *r, int l, int b)

void initialise(int l, int b)
{
    length=l;
    breadth=b;
}

//int area(int length, int breadth)
//area and perimeter are part of struct Rectangle
int area()
{
    return length*breadth;
    // return length*breadth;
}

//int peri(int length, int breadth)
int peri()
{
    // return 2*(length+breadth);
    return 2*(length+breadth);
}

};
int main()
{
   
    // Rectangle r={0,0};
    Rectangle r;
    //Object Rectangle r, having members length and breadth and functions initialise, area and perimeter

    int l1, b1;
    printf("Enter Length: ");
    // scanf("%d", &length);
    // cin>>r.length;
    // instead of direcctly acessing in main function, let done by initialise function
    cin>>l1;
    printf("Enter Breadth:");
    // cin>>r.breadth;
    cin>>b1;

    r.initialise(l1, b1);
    //Instead of calling initialize function and passing r, we declare it as r.initialise, because r itself is having inialize, area and peri function
    //access member of a structure, using dot operator
    int a=r.area();
    //calling r's area
    int p=r.peri();
    //calling r's perimeter
    //callByValue,  passing struct Rectangle r

    //Object will have its properties, and methods/functions (memebr functions)
    printf("Area is: %d\nBreadth is: %d\n", a, p);
}