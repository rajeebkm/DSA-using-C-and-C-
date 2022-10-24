# Time and Space Complexity From Code


1.

void swap(x, y)
{
    int t;
    t=x;
    x=y;
    y=t;
};

 fun(n)=3 (constant) i.e.  3*n^0

 O(n^0)=O(1) Order of 1

2. 

int sum(int A[], int n)
{
    int s, i;
    s=0; // 1 time
    
    for (i=0; i<n; i++) // i=0: 1 time, i<n:  n+1 times as 1 time it will fail,  i++: n time, So total: 2(n+1) taking n+1
    {
        s=s+A[i]; // n time

    }
    return s; // 1 time

}

So Time Function: f(n)=2n+3

Time Complexity: O(n)

Here, one for loop, so O(n)


3. 

void Add(int n)

{
    int i, j;

    for(i=0; i<n; i++>) //n+1
    {
        for (j=0; j<n; j++) //n*(n+1)
        {
         C[i][j]=A[i][j]+B[i][j]; n*n

        }
    
    }
}



So Time Function: f(n)=2n^+2n+1

Time Complexity: O(n^2)


BigO(n^2)
Theta(n^2)
Omega(n^2)


4. 

fun1()
    {
        fun2()
    }

fun2()
{
    for(i=0;i<n;i+=>)
    {

    }
}

Time Complexity: O(n^2)