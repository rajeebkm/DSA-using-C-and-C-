#include<stdio.h>
#include<iostream>

using namespace std;

// defining complex number a+ib
struct Complex {
    int real;
    int imag;
};

// 8 bytes complex (4+4) bytes

struct Student {
    int roll;
    //4 bytes
    char name[25];
    //25 bytes , char takes 1 bytes
    char depart[10];
    //  10 bytes
    char address[50];
     //50 bytes
};

int main(){
struct Student S;
// one student S
S.roll=1;
// S.name[0]='Rajeeb';




printf("Roll no. %d\n", S.roll);
// printf("Roll no. %c\n", S.name[0]);







return 0;
// A return 0 means that the program will execute successfully and did what it was intended to do. 
// return 0' means that the function doesn't return any value. It is used when the void return type is used with the function. It is not mandatory to add a 'return 0' statement to the function which doesn't return any value, the compiler adds it virtually.
}
