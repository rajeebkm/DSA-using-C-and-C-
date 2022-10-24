#include<stdio.h>
#include<iostream>

using namespace std;

// defining a struct Card
struct Card {
    int face;
    int shape;
    int color;
};

int main(){
    struct Card C;

    C.face=1;
    C.shape=0;
    C.color=0;

    // struct Card C={1,0,0};

    // array of structures
    struct Card deck[52]={{1,0,0},{2,0,0}};
    printf("%d", deck[0].face);
    printf("%d", deck[0].shape);

    return 0;
}
