#include <iostream>
#include <cmath>

using namespace std;

class Complex {

    private:
            float real;
            float imag;

    public:

            //Constructors:
            Complex(){
                real = 0;
                imag =0;
                cout << "this is the default constructor" << endl;
            }
            Complex(float n){
                real = imag = n;
                cout << "this the overloaded constructor with one parameter" << endl;
            }
            Complex(float r , float i){
                real = r;
                imag = i ;
                cout << "this the overloaded constructor with two parameter" << endl;
            }

            // set complex functions :

            void setComplex(){
                real = 0;
                imag = 0;
            }
            void setComplex(float n){
                imag = real = n;
                cout << "using set complex functions" << endl;
            }
            void setComplex(float r , float i){
                real = r;
                imag = i;
            }

            // Destructor:
            ~Complex(){
                cout << "the object destructed" << endl;
            }


            //setters :
            void setReal(float real_param){
                    real = real_param;
            }

            void setImag(float imag_param){
                imag = imag_param;
            }

            //getters
            float getReal(){
                return real;
            }
            float getImag(){
                return imag;
            }
            // print function
            void print(){
                if(imag < 0){
                    cout << real << " - " << fabs(imag) << "i" << endl;
                }
                else{
                    cout << real << " + " << imag << "i" << endl;
                }
            }

            // add and subtract functions :
            Complex add(Complex x , Complex y){
                Complex temp;
                temp.real = x.real + y.real;
                temp.imag = x.imag + y.imag;
                return temp;
            }
            Complex subtract(Complex x ,Complex y){
                Complex temp;
                temp.real = x.real - y.real;
                temp.imag = x.imag - y.imag;
                return temp;
            }

            // c3 = c1 + c2
            Complex operator + (Complex c){
                Complex x;
                x.real = real + c.real;
                x.imag = imag + c.imag;
                return x;
            }

            //c3 = c1 - c2
            Complex operator - (Complex c){
                Complex x;
                x.real = real - c.real;
                x.imag = imag - c.imag;
                return x;
            }
            // c3 = c1 + 5
            Complex operator + (float x){
                Complex y;
                y.real = real + x;
                y.imag = imag ;
                return y;
            }
            // c3 = c1 - 5
            Complex operator - (float x){
                Complex y;
                y.real = real - x;
                y.imag = imag ;
                return y;
            }

            // c3 = 5 + c1
            friend Complex operator + (float x ,Complex c ) ;
            // c3 = 5 - c1
            friend Complex operator - (float x ,Complex c ) ;

            // c3 == c1 ?
            int operator == (Complex c){
                if(this->real == c.real && this->imag == c.imag){
                    cout << "they are equal" << endl;
                    cout << "True" << endl;
                    return 0;
                }
                else{
                    cout << "they are not equal" <<endl;
                    cout << "False" << endl;
                    return -1;
                }
            }
            // c1 += c2
            void operator += (Complex c){

                this->real = this->real + c.real;
                this->imag = this->imag + c.imag;
            }
            // ++C1
            Complex operator ++ (){
                real ++;
                return *this;
            }
            //--C1
            Complex operator -- (){
                real --;
                return *this;
            }
            // C1 ++
            Complex operator ++ (int){
                Complex c = *this;
                real ++;
                return c;
            }
            // C1 --
            Complex operator -- (int){
                Complex c = *this;
                real --;
                return c;
            }
            // float( C1 )
             operator float(){
                 return real;
            }
             //operator float(){
               // return imag;
            //}


};

Complex operator + (float x , Complex c )
{
Complex b;
b.real = c.real + x;
b.imag = c.imag;
return b;
}

Complex operator - (float x , Complex c )
{
Complex b;
b.real = x - c.real;
b.imag = c.imag;
return b;
}


int main(){

    Complex comp1(4,5);
    //Complex comp2(2,3);
    //Complex comp3;
    //comp3 = comp1 + comp2 ;
    //comp3 = comp1 - comp2 ;
    //comp3 = comp1 + 2;
    //comp3 = comp1 - 2;
    //comp3 = 5 + comp1;
    //comp3 = 5 - comp1;
    //comp1 == comp2;
    //comp1 += comp2 ;
    //++comp1;
    //--comp1;
    //comp1++;
    //comp1--;
    cout << (float)comp1 << endl;


    //comp3.print();
    comp1.print();

    return 0;

}
