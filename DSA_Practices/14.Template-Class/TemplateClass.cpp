#include<stdio.h>
#include<iostream>
using namespace std;



//C++ supports Generic Function and Generic Classe called Template Function and Template Class respectively

//For different types of Data, We use Generic Classes (int, float, long int etc.),no need to use different classes.

template<class T>
// T is the Generic Variable

class Arithmatic
{
    private:
    // int a;
    // int b;

    T a;
    T b;

    //T may be any data type, Generic Data type, may be float, int etc

    public:
    // Arithmatic(int a1, int b1);
    // int add();
    // int sub();
    Arithmatic(T a1, T b1);
    T add();
    T sub();
};

//template class ends here, again we have to write template for Functions

template<class T>

//Here we should pass template parameters, so class name should contain template variable T, so add <T> with class name
Arithmatic<T>::Arithmatic(T a1, T b1)
{
    this->a=a1;
    this->b=b1;
}
//this->a means pointing to data members, current object, constructor is called with every object


template<class T>
T Arithmatic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithmatic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}

int main()
{
    Arithmatic<int> A(10,5);
    cout<<"Addition: "<<A.add()<<endl;
    Arithmatic<float> Ar(10,8);
    cout<<"Substraction: "<<Ar.sub();
}

//Now main () is working fr any data type