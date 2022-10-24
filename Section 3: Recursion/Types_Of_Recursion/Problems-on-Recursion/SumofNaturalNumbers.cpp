//Sum of Natural Numbers= n(n+1)/2
// 1+2+3+4+......................+n

//Sum(n)= 1+2+3+4+......................+n-1+n

//Sum(n)= Sum(n-1)+n

// Sum(n)
//1. 0 when n=0,
//2. Sum(n-1)+n
//Recursion uses stack internally

#include<stdio.h>
#include<iostream>
using namespace std;

int Sum(int n)
{
    if (n==0)
        return 0;
    else
        return Sum(n-1)+n;
    }

// Time Complexity: n+1 => O(n)
// Space Complexity: n+1 => O(n)



// By formula
int B;
int Sumof(int n)
{
  
    B=n*(n+1)/2;
    return B;    
    // Order of 1: O(1)
    
}
// int main()
// {
    
//     Sumof(100);
  
//     printf ("%d", B);
// }


//By for loop
int Sums(int n)
{
    int i, S=0;
    // 1 time
    for (i=1; i<=n; i++)
    // n+1 times
    {
        S=S+i;
        //n times
    }
    return S;
}

//O(n)

int main()
{
    int A;
    A=Sum(50);
    printf("%d ", A);

    A=Sumof(100);
    printf("%d ", A);


    A=Sums(200);
    printf("%d ", A);

    
    
}