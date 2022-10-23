#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

// void changelength((struct Rectangle *p, int l)


// {
//     p->length=l;
  

// }

struct Rectangle
{
    int length;
    int breadth;
};

// int main(){
// struct Rectangle r={10,5};
// changelength(&r, 20);


// }



void changelength(struct Rectangle *p, int l)


{
   p->length=l;
  
}



int main()
{
struct Rectangle r={10,5};
changelength(&r,30);
cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth;

}

// struct test
// {
//     int A[5];
//     int n;
// };

// void fun(struct test *t1)
// {
//     t1->A[0]=10;
//     t1->A[1]=23;
// }



// int main(
//     {
//         struct test t={{2,3,4,5,6}, 5};
//         //array can be send by passbyaddress not passbyvalue
//         //structure can be send by passbyvalue though it contains array inside.
//         fun(&t);
//     }
// )