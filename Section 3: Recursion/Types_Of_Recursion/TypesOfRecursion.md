# Types of Recursion

1. Tail Recursion

If Recursive function calling itself i.e recursive calls and that function that is called by itself (or, that call is the last statement of the function), is the last statement of that recursive function, after that call there is nothing to execute, called Tail Recursion.

All the operations will be performed during calling time only, functions will not be performing any operations in returning time.
Everything performed at calling time only.



Example:
---------------

#include<stdio.h>
#include<iostream>

using namespace std;

void fun1(int n)
{
    if (n>0)
    {
        printf("%d\n", n);
        fun1(n-1);
    }
}

int main()
{
    int x=3;
    fun1(x);
}

// O/P: 3 2 1
// During calling time, printing is done


Suppose fun1(n-1) + n;  

So addition will be happened during returning as untill unless value of fun1 will no be known addition will not be happened, So it's not a Tail Recursion as something has to be performed during returning time.

tail recursion means at returning time.

It doesn't have to perform anything at all.



By using Loop
-------------------------
Every recursive function can written as a loop or vice versa. Every loop can also be converted in the form of a recursion.



#include<stdio.h>
#include<iostream>

using namespace std;

void fun1(int n)
{
    while (n>0)
    {
        printf("%d\n", n);
        n--;
    }
}

int main()
{
    int x=3;
    fun1(x);
}

// O/P: 3 2 1
// During calling time, printing is done


Time taken by both of them is same. Time Complexity: O(n)

Let us analyze the space. This is a recursive function. It internally utilizes a stack. So far the value of a three (n=3). It will create total four activation (n+1) records in the stack.
Space taken by this is Order of n: O(n)

But for while loop, Space Complexity: O(1) as it will create only 1 activation record inside stack.

The conclusion is if you have to write a Tail recursion, then better you convert it into a loop that is more efficient in terms of space. No in every recursion. In Tail recursion, Loop is more efficient.

Some compilers under code optimization inside the compiler, they will check. If you have written any function, which is a Tail recursion, then they will try to convert it in the form of a loop. It means they will try to reduce the space consumption and they will utilize only order of one space. So your function will be converted into object code, just like a loop where the space is reduced.

2. Head Recursion

If Recursive function calling itself i.e recursive calls and that function that is called by itself (or, that call is the first statement of the function), is the first statement of that recursive function, called Tail Recursion.

All the processing it has to do, will do it afterwards after the recursive call. So there is no statement, no operation before the function call.

It means the function doesn't have to process or perform any operation at the time of calling. It has to do everything only at the time of returning. So all the processing is done at returning time.


Example:
------------------

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


Loop
-------------------
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

// O/P: will not come as 3 2 1 
// 2 1 0 will be the O/P



If a recursive function has to do something at return in time, it cannot be easily converted in the form of a loop, but it can be converted.

3. Tree Recursion

Linear Recursion:
If function is calling itself only one time, then it is a linear Recursion.
There is having something to process before the call as well as after the call. So it is just a recursive function.


If a function that is recursive function is calling itself more than one time.

void fun(int n)
{
    if (n>0)
    {
        printf("%d\n", n);
        fun(n-1);
        fun(n-1);
    }
}

int main()
{
    fun(3);
}

Process:

Calling Time
-----------------------------
fun(3)--->3,fun(2), _______ (1st Call, 2nd Call)
fun(2)--->2, fun(1), _______(3rd Call)
fun(1)---->1, fun(0), ______(4th Call)
fun(0)---->out of loop, and activation record is deleted for n=0

-------------------------------

Returning Time
-------------------------------
fun(1)---->1, fun(0), fun(0)                        (5th Call)
fun(0)---->out of loop, and activation record is deleted for n=0
fun(0)---->out of loop, and activation record is deleted for n=0
fun(2)---->2, fun(1), fun(1)                        (6th Call)
fun(1)----->1, fun(0), fun(0)                       (7th Call, 8th Call)
fun(0)---->out of loop, and activation record is deleted for n=0
fun(0)---->out of loop, and activation record is deleted for n=0
fun(3)----->3, fun(2), fun(2)                           (9th Call)
fun(2)----->2, fun(1), fun(1)                           (10th Call)
fun(1)------>1, fun(0),fun(0)                    (11th Call, 12th Call)      
fun(1)------>1, fun(0), fun(0)                     (13th Call, 14th Call, 15th Call)
fun(0)---->out of loop, and activation record is deleted for n=0
fun(0)---->out of loop, and activation record is deleted for n=0
fun(0)---->out of loop, and activation record is deleted for n=0
fun(0)---->out of loop, and activation record is deleted for n=0

-----------------------------------------
Maximum size of stack = 4
Activation Records Created: 15 times created and deleted, 15 calls are made for n=3

For n=3, there are 4 levels, and 1+2+4+8=15 calls i.e. 2^0+2^1+2^2+2^3 (GP Series)

For n, 2^0+2^1+2^2+2^3+....+2^n  i.e Number of Calls is an order of 2^n, O(2^n)
Space Complexity: Maximum Height of Stack: Height of Tree (4) n+1, i.e orderof n


4. Indirect Recursion

In Indirect Recursion, There may be more than one function, they are calling one another in an circular fashion. That is first fanctioncalls 2nd function, 2nd functioncalls 3rd function and 3rd function again calls back 1st function like that.

Like funa() calls funb(), funb() calls func(), func() calls funca() again like that untill condition fails.

Trace the Example:
-----------------------------

void funB(int n);
void funA(int n)
{
    if(n>1)
    {
        printf("%d ", n);
        funB(n-1);
    }
}

void funB(int n)
{
    if(n>1)
    {
        printf("%d ", n);
        funA(n/2);
    }
}
int main()
{
    funA(20);
    return 0;
}



6. Nested Recursion

In a Nested Recursion, recursive function will pass parameters as recursive call i.e recursion inside recursion.

Example:
-------------------

int fun(int n)
{
    if (n>100)
    return n-10;
    else
    return fun(fun(n+11));
}

fun(95);