#include<stdio.h>
#include<iostream>

using namespace std;

// definition of structure "Rectangle" doesn't consume memory
struct Rectangle {
    int l;
    int b;
    char c;
};

// } r1, r2; Also can declare with definition. global variables
 // struct Rectangle r; (We can declare outside main function, it will be accessible by all the functions in the program)

int main () {
    // struct Rectangle r;  
    // Declaration
    struct Rectangle r={20, 4}; 
     // Declaration + Initialisation
    // Created inside the stack memory for the main function.
   
   r.l=15; 
   r.b=10;
//     dot operator is used for accessing (read) and modifying (write) the member
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    printf("Area of Rectangle is %d\n", r.l*r.b);
    printf("Size of r is: %lu", sizeof(r));
//long unsigned
// An unsigned variable type of int can hold zero and positive numbers, and a signed int holds negative, zero and positive numbers. ... An int type in C, C++, and C# is signed by default. If negative numbers are involved, the int must be signed; an unsigned int cannot represent a negative number.
// allocation shouldbe easy , so its taking 4 bytes instead of 1 bytes, called padding, it will takes extra memory of 3 bytes to read the entire structure at once
    return 0;
// A return 0 means that the program will execute successfully and did what it was intended to do. 
// return 0' means that the function doesn't return any value. It is used when the void return type is used with the function. It is not mandatory to add a 'return 0' statement to the function which doesn't return any value, the compiler adds it virtually.
}
