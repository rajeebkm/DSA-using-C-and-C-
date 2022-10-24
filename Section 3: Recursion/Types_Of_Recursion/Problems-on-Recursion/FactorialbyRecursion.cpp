// Factorial of number n

//n!=1*2*3*.......*n
//0!=1
//1!=1

//fact(n)=1*2*3*.......*(n-1)*n
//fact(n)=fact(n-1)*n
//1. fact(n-1)+n   if n>0
//2. 1              if n=0

#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else 
    return fact(n-1)*n;
    
}


int Ifact(int n)
{
    int i, Fact=1;
    for(i=1;i<=n;i++)
        Fact=Fact*i;
        return Fact;
}


int main()
{
    int F;
    F=fact(6);
    printf("%d\n", F);
    F=Ifact(5);
    printf("%d\n", F);
    return 0;
}

// Stack overflow happened if infinte recursive calls happens inside stack, example factorial of a negative number (-1), will go to infinte

//To avoid, we can modify the condition