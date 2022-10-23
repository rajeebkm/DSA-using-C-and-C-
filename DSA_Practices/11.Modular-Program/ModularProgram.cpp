#include<stdio.h>
#include<iostream>
// #include<stdlib.h>

using namespace std;

int area(int l, int b)
{
    return l*b;
}

int peri(int l, int b)
{
    return 2*(l+b);
}
int main()
{
    int length=0;
    int breadth=0;

    printf("Enter Length: ");
    // scanf("%d", &length);
    cin>>length;
    printf("Enter Breadth:");
    cin>>breadth;
    
    int a=area(length, breadth);
    int p=peri(length, breadth);

 
    printf("Area is: %d\n Breadth is: %d\n", a, p);
}