#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
int add(int a, int b){
    //a b are formal parameters
    int c;
    c=a+b;
    return c;
}

int main(){
int x=10;
int y=15;
int sum;
sum=add(x,y);
//x , y are actual parameters
// We are reducing the workload from the main function, that's y other functions do the task and called in main function. 
printf("Sum is: %d\n", sum);


return 0;

}