#include<stdio.h>
#include<iostream>

using namespace std;

void fun2(int n)
{
    if (n>0)
    {
        fun2(n-1);
        printf("%d\n", n);
      
    }
}

int main()
{
    int x=3;
    fun2(x);
}

// O/P: 1 2 3
// During returning time, printing is done