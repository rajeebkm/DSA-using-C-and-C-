#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    //Data Member with data type int

    public:
    Rectangle()
    //constructor(Rectangle) will not have any return type, it may or maynot take parameter/argument
    {
        length=breadth=1;
        //initialize
        // default constructore, overloaded constructore
        
    }
    Rectangle(int l, int b);
    //Parameterized Constructor, called constructor Overloading, takes l and b, we will be defining outside using Scope Resolution Operation
    //This is just a prototype/signature/header of a function, constructor member function
    int area();
    int perimeter();

    //area, perimeter funtions are called Facilitators, which perform task

    int getLength()
    {
        return length;
    }
    //getter function , Acesser
    void setLength(int l)
    {
        length=l;
    }
    //Mutator, Setter function
    ~Rectangle();
    //Destructor function, to release memory, when dynamic allocation inside the constructore
};

//default constructor, already implemented, other 3 functions have to be implemented

// Defaualt constructor is already implemented, we have to implement other 3 function outside this class.

//FOR PARAMETERISED Constructor

//Classname::constructor name

Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
//not a independent function, part of Rectangle class, so scope resolution is used
Rectangle::~Rectangle()
{

}

//here we can release/destroy the memory

int main()
{
    Rectangle r(10,5);
    //Object of Rectangle r
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setLength(20);
    cout<<r.getLength()<<endl;


}

//Function ends, destructor will be automatically called, destroy the object.