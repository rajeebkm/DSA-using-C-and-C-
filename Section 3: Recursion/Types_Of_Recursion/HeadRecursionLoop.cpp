#include<stdio.h>
#include<iostream>

using namespace std;

void fun1(int n)
{
    while (n>0)
    {
        n--;
        printf("%d\n", n);
      
    }
}

int main()
{
    int x=3;
    fun1(x);
}