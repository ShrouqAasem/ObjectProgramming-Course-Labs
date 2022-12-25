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

        void operator = (const Stack &s){
            delete[] this->st;
            this->top = s.top;
            this->Size = s.Size;
            this->st = new int[Size];
            for (int i=0 ; i<top;i++){
                this->st[i] = s.st[i];
            }

        }
        void printInfo(){
            for (int i=0 ; i<this->top;i++){
                cout << this->st[i] << endl;
            }
        }

};
int Stack::counter=0;
int main()
{


    Stack s1(2);

    s1.push(5);
    s1.push(14);


    Stack s2;
    s2 = s1;
    s2.push(4);
    s2.printInfo();

    return 0;
}
