#include<stdio.h>
#include<iostream>

using namespace std;

// definition of structure "Rectangle" doesn't consume memory. So if we create a variable of this type, then it will be occupying that much memory. The size of a structure is the total amount of memory consumed by all its members.
struct Rectangle {
    int l;
    int b;
    char c;
};

// we can declare structure with definition, variables called global variables.accessible by all functions.
// } r1, r2; 

// we can declare outside main function, it will be accessible by all the functions in the program
// struct Rectangle r; 

int main () {
    // Declaration of struct
    // struct Rectangle r;  // r will occupy the memory space
    // Declaration + Initialisation
    // created inside the stack memory for the main function.
    //Accessing the members of the structure and modify. dot operator is used for accessing (read) and modifying (write) the member
    struct Rectangle r={20, 4}; 
    r.l=15; 
    r.b=10;

    cout<<r.l<<endl;
    cout<<r.b<<endl;

    printf("Area of Rectangle is %d\n", r.l*r.b);

    // size of(r) is 12 bytes (int (4)+int (4)+ char (4) (instead of 1, taking 4, because memory is allocated 4 bytes, though it uses only 1 byte)). Machine can access 4 bytes at a time, but it will be using 1 bytes out of it. For making it accessible to easy, it is allocating 4 bytes for each member, so total is 12 bytes. If you take float, then it will take greater number of bytes. So it definitely depends on the size of the data type. But for character, instead of taking 1 byte, it will take the nearest bigger size that is integer. This adjustment in thememory is called padding, means it will take extra memory. Actual sizeof struct is 9 bytes, 
    
    // actual size of a structure is 9 bytes, but it will take 3 bytes extra so that it is easy or our machine that is processor to read the entire structure at once. The later on, it will discard last 3 bytes, first 4 for l, next 4 for b and 1 byte for c.

    // allocation shouldbe easy , so its taking 4 bytes instead of 1 bytes, called padding, it will takes extra memory of 3 bytes to read the entire structure at once

    //long unsigned (lu)
    // An unsigned variable type of int can hold zero and positive numbers, and a signed int holds negative, zero and positive numbers. ... An int type in C, C++, and C# is signed by default. If negative numbers are involved, the int must be signed; an unsigned int cannot represent a negative number.
    
    
    printf("Size of r is: %lu\n", sizeof(r)); 
    
    // A return 0 means that the program will execute successfully and did what it was intended to do. 
    // return 0' means that the function doesn't return any value. It is used when the void return type is used with the function. It is not mandatory to add a 'return 0' statement to the function which doesn't return any value, the compiler adds it virtually.
    return 0;
    
}
