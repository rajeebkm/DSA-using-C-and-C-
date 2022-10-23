#include<stdio.h>
#include<iostream>
// #include<stdlib.h>

using namespace std;


 struct Rectangle
{
    int length;
    int breadth;
};


//Initialise by a separate function instead of main function

void initialise(struct Rectangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}

//int area(int length, int breadth)
//area and perimeter are part of struct Rectangle
int area(struct Rectangle r)
{
    return r.length*r.breadth;
    // return length*breadth;
}

//int peri(int length, int breadth)
int peri(Rectangle r)
{
    // return 2*(length+breadth);
    return 2*(r.length+r.breadth);
}
int main()
{
   
    Rectangle r={0,0};

    int l1, b1;
    printf("Enter Length: ");
    // scanf("%d", &length);
    // cin>>r.length;
    // instead of direcctly acessing in main function, let done by initialise function
    cin>>l1;
    printf("Enter Breadth:");
    // cin>>r.breadth;
    cin>>b1;

    initialise(&r,l1, b1);
    
    int a=area(r);
    int p=peri(r);
    //callByValue,  passing struct Rectangle r

 
    printf("Area is: %d\nBreadth is: %d\n", a, p);
}