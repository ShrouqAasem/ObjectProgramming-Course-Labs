#include <iostream>

using namespace std;

class Base
{

private:
    int a;

protected:
    int c;

public:
    int b;

    Base()
    {
        a=b=c=0;
    }
    Base(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    ~Base(){
        cout<<"This is Destructor (Base)"<<endl;
        cout<<endl;
        cout<<endl;

    }

    void setx(int x){
        a = x;
    }

    int getx(){
        return a;
    }

/*
void sety(int y){

        b = y;

}

void setz(int z){

        c = z;

}


int gety(){

        return y;

}

int getz(){

        return z;

}
*/

/*
    int calculate(){
        return 0
    }
*/

};

class Derived : public Base
{

public:
    Derived()
    {
        cout<<"this is Default Constructor"<<endl;
    }
    Derived(int x, int y, int z) : Base(x, y, z)
    {
        cout<<"this is input Constructor (Derived)"<<endl;
    }
    ~Derived()
    {
        cout<<"this is Destructor (Derived)"<<endl;
        cout<<endl;
        cout<<endl;

    }

    int calculateSum(){
        return (getx() + b + c) ;
    }
};

int main()
{
    cout << "Hello Eng.Mahmoud" << endl;
    cout<<endl;
    cout<<"This is Derived"<<endl;
    cout<<endl;
    cout<<endl;
    Derived D1(1, 2, 4);
    cout<<endl;
    cout<<endl;
    cout<<"Result is "<<D1.calculateSum()<<endl;
    cout<<endl;
    cout<<endl;

    return 0;
}
