#include <iostream>

using namespace std;


class Stack {
    private :
        int top;
        int Size;
        int *st;
        static int counter ;

    public:
        Stack(int n=10){
            counter ++;
            top=0;
            Size=n;
            st = new int[Size];
            cout << "this is the constructor of the class object with specific size" << endl;
        }
        ~Stack(){
            counter --;
            delete[] st;
            cout << "the object is destructed" << endl;
        }
        void push(int n){
            if(top == Size){
                cout << "stack is full" << endl;
            }
            else{
                st[top] = n;
                top++;
            }
        }
        int pop(){
            int retValue;
            if(top == 0){
                cout << "stack is empty " << endl;
                retValue = -1;
            }
            else{
                top--;
                retValue = st[top];
            }
            return retValue;
        }

        static int getCounter(){
            return counter ;
        }

};
int Stack::counter=0;
int main()
{


    Stack s1(2);

    s1.push(5);
    s1.push(14);
    s1.push(21);


    cout << s1.pop() << endl;

    Stack s2;
    Stack s3(8);
    cout << s1.getCounter() << endl;

    return 0;
}
