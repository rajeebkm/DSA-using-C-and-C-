#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;



struct Rectangle {

    int l;
    int b;
};

int area(struct Rectangle &r1)
//new object will not be created, code will be pasted in main ()
//Structure is passed as a parameter
{
r1.l ++;
return r1.l*r1.b;
//but actualparameter r will be changed, as it's callByReference
}



int main(){
struct Rectangle r={20,5};
printf("Area is: %d\n", area(r));
printf("Area is: %d", r.l*r.b);
//area r.l*r.b is changed as it's call by Reference

return 0;

}
