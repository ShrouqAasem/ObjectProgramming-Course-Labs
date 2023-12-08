#include <iostream>
#include "Complex.h"
#include "Stack.h"

using namespace std;
Complex add(Complex comp1,Complex comp2)
{
    Complex temp;
    temp.setReal(comp1.getReal()+comp2.getReal());
    temp.setImag(comp1.getImag()+comp2.getImag());
    return temp;
}
Complex sub(Complex comp1,Complex comp2)
{
    Complex temp;
    temp.setReal(comp1.getReal()-comp2.getReal());
    temp.setImag(comp1.getImag()-comp2.getImag());
    return temp;
}

Complex add_to(Complex c,float v)
{
    Complex b;
    c.real=c.real+v;
    return b;
}
Complex     +(float x,Complex c)
{
    c.real+=x;
    return c;
}

Complex operator-(float x,Complex c)
{
    c.real-=x;
    return c;
}
void viewContent(Stack x)
{
    int i = x.top;
    while(i!=0)
        cout<<x.st[--i]<<endl;
    cout<<Stack::counter<<endl;
}
/*
int main()
{
    Complex myCop1(5),myCop2(3,2),resultComp;
    myCop1.setComplex(5,4);
    myCop2.setComplex(6,5);
    resultComp= ++myCop1;
    resultComp.print();

    return 0;
}
*/

int main()
{
    Stack s1(5),s2(4),s3(5);
    s1.push(7);
    s1.push(4);
    s1.push(9);
    s2.push(8);
    s2.push(12);
    s2.push(10);
    s3=s2=s1;
        cout<<Stack::counter<<endl;

    viewContent(s2);
        cout<<s2.pop()<<endl;
    //cout<<s1.pop()<<endl<<Stack::counter<<endl<<s2.counter<<endl;
    return 0;
}
