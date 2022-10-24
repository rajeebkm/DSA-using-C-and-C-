#include<stdio.h>
#include<iostream>

using namespace std;

// defining complex number a+ib. 
// 8 bytes complex (4+4) bytes
struct Complex {
    int real;
    int imag;
};


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
}
