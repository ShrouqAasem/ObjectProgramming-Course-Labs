#include <iostream>

using namespace std;


/////////////////////////////parent//////////////////////////
class Base
{
private:
    int a;
    int b;
public:
    Base(){
        a=b=0;
    }
    Base(int x){
        a=b=x;
    }
    Base(int x, int y){
        a = x;
        b = y;
    }
    ~Base(){
        cout<<"This is destructor (Base)"<<endl;
    }
    void setA(int x){
        a = x;
    }
    void setB(int y){
        b = y;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
    int multAB(){
        return a * b;
    }
};

/////////////////////////////////////////////////////////////

/////////////////////////////child//////////////////////////
class Derived : public Base
{
private:
    int c;
public:
    Derived(){
        c=0;
    }
    Derived(int x) : Base(x)
    {
        c=x;
    }
    Derived(int x, int y, int z) : Base(x, y)
    {
        c = z;
    }
    ~Derived(){
        cout<<"This is destructor (Derived)"<<endl;
    }
    void setC(int z){
        c = z;
    }
    int getC(){
        return c;
    }
    int multABC(){
        return multAB() * c;
    }
};

/////////////////////////////////////////////////////////////

/////////////////////////////Second child//////////////////////////

class SecondDerived : public Derived
{
private:
    int d;
public:
    SecondDerived(){
        d=0;
    }
    SecondDerived(int x) : Derived(x)
    {
        d=x;
    }
    SecondDerived(int x, int y, int z, int h) : Derived(x, y, z)
    {
        d = h;
    }
    void setD(int h){
        d = h;
    }
    ~SecondDerived(){
        cout<<"This is destructor (SecondDerived)"<<endl;
    }
    int getD(){
        return d;
    }
    int multABCD(){
        return multABC() * d;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    cout<<"This is Base"<<endl;
    Base B1(3, 4);
    cout<<B1.multAB()<<endl;
    cout<<endl;

    cout<<"This is Derived"<<endl;
    Derived D1;
    D1.setA(3);
    D1.setB(4);
    D1.setC(5);
    cout<<D1.multABC()<<endl;
    cout<<endl;

    cout<<"This is Second Derived"<<endl;
    SecondDerived SD1(3, 4, 5, 6);
    cout<<SD1.multABCD()<<endl;
    cout<<endl;

    return 0;
}

