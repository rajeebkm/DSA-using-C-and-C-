#include<stdio.h>
#include<iostream>
using namespace std;

int fun(int n)
{
    if (n>100)
    return n-10;
    else
    return fun(fun(n+11));
    //Nested Call
}

int main()
{
    int A=fun(250);
    printf("%d", A);
    return 0;

}