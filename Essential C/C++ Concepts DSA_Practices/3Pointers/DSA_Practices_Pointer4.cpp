#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//pointer to an array

int main(){


int *p1;
//4 bytes
char *p2;
//1 bytes
float *p3;
//4 bytes
double *p4;
struct Rectangle *p5;

cout<<sizeof(p1)<<endl;

cout<<sizeof(p2)<<endl;

cout<<sizeof(p3)<<endl;

cout<<sizeof(p4)<<endl;

cout<<sizeof(p5)<<endl;

return 0;

}

//size of pointer is independent of data types