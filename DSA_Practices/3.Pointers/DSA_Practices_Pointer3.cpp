#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//pointer to an array

int main(){


int *p;
// p=(int *)malloc(5*sizeof(int));
p=new int[5];
p[0]=2; p[1]=3; p[2]=2; p[3]=7; p[4]=5;



for (int i=0; i<5;i++){
    // cout<<A[i]<<endl;
    cout<<p[i]<<endl;
    //pointer acts as name of an array, in case of an array
}
delete[ ] p;
free(p);
//release the memory after the program finished
return 0;

}