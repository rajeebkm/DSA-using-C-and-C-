#include<stdio.h>
#include<iostream>

using namespace std;

// defining complex number a+ib
struct Card {
    int face;
    int shape;
    int color;
};



int main(){
struct Card C;
// one student S
C.face=1;
C.shape=0;
C.color=0;

// struct Card C={1,0,0};

struct Card deck[52]={{1,0,0},{2,0,0}};
// array of structure
printf("%d", deck[0].face);











return 0;
// A return 0 means that the program will execute successfully and did what it was intended to do. 
// return 0' means that the function doesn't return any value. It is used when the void return type is used with the function. It is not mandatory to add a 'return 0' statement to the function which doesn't return any value, the compiler adds it virtually.
}
