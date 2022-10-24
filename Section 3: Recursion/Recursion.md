# Recursion

1. What is Recursion
2. Example of Recursion
3. Tracing of Recursion
4. Stack used in Recursion
5. Time Complexity
6. Recurrence Relation



## What is Recursion

int fun2()
{
    1.----------------
    2.------------------
    3.----------------
}

int main()
{
    1.--------------
    2.------------------
    3. fun2(x)*2;  //fun2 is called control goes to fun2, after completion of fun2,control will come back to line 2 same line if any operation needs to be  done        
    4.---------------
    5.-------------
}



If a function calling itself inside the same function, called the Recursive function, There must be some base condition that will terminate the recursion, to avoid repeatatively calling the same function.


Type fun(param)
{
    if(base condition>)
    {
        1.----------
        2.-----------
        3. func(param)
        4.----------

    }
}


Example:

1.

void fun1(int n)
{
    if (n>0)
    {
        printf("%d", n);
        fun1(n-1);
    }
}

int main()
{
    int x=3;
    fun1(x);
}

O/P: 3 2 1
During calling time, printing is done

2.
void fun2(int n)
{
    if (n>0)
    {
        fun2(n-1);
        printf("%d", n);
      
    }
}

int main()
{
    int x=3;
    fun2(x);
}

O/P: 1 2 3
During returning time, printing is done




Example: Room 1, Room 2, Room 3

Calling Phase
1. Switch on the Ball
2. Go to next room

O/p: 1 2 3


Reurning phase
1. Go to next room
2. Switch on the Ball

O/P: 3 2 1
------------------------------------------------------------------------------


Generalising Recursion
---------------------------
2 phases


void fun(int n)
{
    if(n>0)
    {
        1.----Calling------//Execute During Calling time, Ascending
        2. func(n-1)* 2; //Execute During Returning time
        3.---Returning-------//Execute During Returning time, Descending

    }
}

Loop will have only Ascending phase but Recursion has both Ascending and Descending phase

----------------------------------------------------------------------------------
How Recursion Uses stack ?

There are four calls so size of stack memory consumed by recursion is: 4 i.e. (n+1)
Activation records created for every calls. n+1 activation records are created

Memory consumed is order of n: O(n) (Space)
Degree of n.

If n= 4, memory consumed (n+1) activation records is equal to number of calls.


----------------------------------------------------
Time complexity of Recursive function


For x=3, it's printing 3 times, so time complexity: O(3)
For x=n, O(n)

Degree of polynomial 1, order of n. O(n)

----------------------------------------
Recurrence Relation: Find Time complexity of function in the form of recurrence relation 

void fun1(int n) (Assume Time taken by fun1: T(n) i.e. sum of all the statements inside)
{
    if(n>0) (1 unit time)

{
    printf("%d", n); (1 unit time)
    fun1(n-1) ((n-1) unit times)
}
}


Assume Time taken by fun1: T(n) i.e. sum of all the statements inside

Total Time: T(n)= T(n-1)+2 when n>0;
            T(n)=1, when n=0


            Recurrence Relation:    T(n)= T(n-1)+2, when n>0;
                                    T(n)=1, when n=0

---------------------------------------------
Induction Method or, Successive Substitution Method

Make constant +2 as +1;

T(n)= T(n-1)+1  (T(n-1)=T(n-2)+1)

T(n)=T(n-2)+1+1=T(n-2)+2
.
.
.
T(n)=T(n-k)+k


Assume n-k=0; n=k

T(n)=T(0)+n
T(n)=1+n

Order of n: O(n)

------------------------------------
Tail Recursion



void fun1(int n)
{
    if (n>0)
    {
        printf("%d", n);
        fun1(n-1);
    }
}

int main()
{
    int x=3;
    fun1(x);
}

O/P: 3 2 1
During calling time, printing is done




Head Recursion:


void fun2(int n)
{
    if (n>0)
    {
        fun2(n-1);
        printf("%d", n);
      
    }
}

int main()
{
    int x=3;
    fun2(x);
}

O/P: 1 2 3
During returning time, printing is done