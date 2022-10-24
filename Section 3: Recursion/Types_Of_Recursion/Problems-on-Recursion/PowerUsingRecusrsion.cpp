//Exponential Function

//2^5=2*2*2*2*2
//m^n=m*m*m*m.....n times
//m^n=m*m*m*...........(n-1) times *m
//pow(m,n)=pow(m,n-1)*m if n>0
//pow(m,n)=1 if n=0


//Recursive Function
#include<stdio.h>

int Power(int m, int n)
{
    if(n==0)
    return 1;
    else
    return Power(m,n-1)*m;

}


//Less number of multiplication, 6 multiplication instead of 9 multiplication in previous example

int Pows(int m, int n)
{
    if(n==0)
    return 1;
    if (n%2==0)
    return Pows(m*m, n/2);
    else
    return m*Pows(m*m, (n-1)/2);
}

int main()
{
    int P;
    P=Power(2,9);
    printf("%d ", P);
    P=Pows(2,9);
    printf("%d ", P);


    return 0;
}

