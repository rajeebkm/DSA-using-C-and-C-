#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int length=0;
    int breadth=0;

    printf("Enter Length: ");
    scanf("%d", &length);
    // cin>>length;
    printf("Enter Breadth:");
    cin>>breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);

    printf("Area is: %d\nBreadth is: %d\n", area, peri);
}