#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;



struct Rectangle {

    int l;
    int b;
};

int area(struct Rectangle r1)
//Structure is passed as a parameter
{
r1.l ++;
cout<<"Length:"<<r1.l<<endl<<"Breadt:"<<r1.b<<endl;
//but actualparameter r will not changed, r1.l changed
return r1.l*r1.b;
}



int main(){
struct Rectangle r={20,5};
printf("Length: %d\nBreadth: %d\n", r.l, r.b);
printf("Area is: %d\n", area(r));
printf("Area is: %d", r.l*r.b);
//area r.l*r.b is not changed as it's call by value

return 0;

}
