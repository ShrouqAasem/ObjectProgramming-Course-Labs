#include <iostream>

using namespace std;

using namespace std;

class A
{
    private :
        int x;
    public:

        A(){
            x=10;A
            }
        friend class B;    //friend class
};

class B
{
    public:
        void display(A &t)
        {
            cout<<endl<<"The value of x="<<t.x;
        }
};

int main(){

    A a;
    B b;
    b.display(a);

    return 0;
}
