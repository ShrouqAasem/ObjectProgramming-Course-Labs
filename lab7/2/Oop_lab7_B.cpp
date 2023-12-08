#include <iostream>

using namespace std;

class GeoShape
{
//subclasses will see those variable and other classes will NOT see or use it.
protected:
    float Num1; //dim1
    float Num2; //dim2

public:
//constructors
    GeoShape()
    {
        Num1 = Num2 = 0;
    }
    GeoShape(float x)
    {
        Num1 = Num2 = x;
    }
    GeoShape(float x, float y)
    {
        Num1 = x;
        Num2 = y;
        cout<<"This is constructor (GeoShape)"<<endl;
    }
    ~GeoShape()
    {
        cout<<"This is Destructor (GeoShape)"<<endl;
    }
    float setNum1(int x)
    {
        Num1 = x;
    }
    float setNum2(int y)
    {
        Num2 = y;
    }
    float getNum1()
    {
        return Num1;
    }
    float getNum2()
    {
        return Num2;
    }
    float calculateArea(){
        return 0;
    }
};

////////////////////////////Rectange////////////////////////////////

class Rect : public GeoShape
{
public:
    Rect(){
        cout<<"This is Default Constructor (Rect)"<<endl;
    }
    Rect(float q, float w) : GeoShape(q, w)
    {

    }
    ~Rect()
    {
        cout<<"This is Destructor (Rect)"<<endl;
    }
    void setNum1(int n)
    {
        Num1 = Num2 = n;
    }
    float getNum1()
    {
        return Num1;
    }
// Length x
    float calculateArea(){
        return Num1 * Num2;
    }
};

////////////////////////////circle////////////////////////////////
class Circle : protected GeoShape
{
public:
    Circle(){
        cout<<"This is Default Constructor (Circle)"<<endl;
    }
    Circle(float n) : GeoShape(n)
    {

    }
    ~Circle()
    {
        cout<<"This is Destructor (Circle)"<<endl;
    }
    void setRadius(int n)
    {
        Num1 = Num2 = n;
    }
    float getRadius()
    {
        return Num1;
    }
// 3.14 radius^2
    float calculateArea(){
        return 3.14 * Num1 * Num2;
    }
};

////////////////////////////square////////////////////////////////

class Square : protected Rect
{
public:
    Square(){
        cout<<"This is Default Constructor (Square)"<<endl;
    }
    Square(float n) : Rect(n, n)
    {

    }
    ~Square()
    {
        cout<<"This is Destructor (Square)"<<endl;
    }
    void setNum1(int n)
    {
        Num1 = Num2 = n;
    }
    float getNum1()
    {
        return Num1;
    }
// Length x Himself
    float calculateArea(){
        return Num1 * Num2;
    }
};

int main()
{
    cout<<"*******Lab7*******"<<endl;
    cout<<endl;
    cout<<endl;
    cout << "Hello Eng.Mahmoud" << endl;
    cout<<endl;
    cout<<endl;
///////////////////////shape/////////////////////
/*
    Circle c1;
    cout<<endl;
    cout<<endl;
    c1.setRadius(3);
    cout<<endl;
    cout<<endl;
    cout<<"This is the area of the (Circle):  "<<c1.calculateArea()<<" m^2"<<endl;
    cout<<endl;
    cout<<endl;
*/
    Square S1;
    cout<<endl;
    cout<<endl;
    S1.setNum1(3);
    cout<<endl;
    cout<<endl;
    cout<<"This is the area of the (Square):  "<<S1.calculateArea()<<" m^2"<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}
