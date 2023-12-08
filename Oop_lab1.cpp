#include <iostream>
#include <cmath>

using namespace std;

class Complex {

    private:
            float real;
            float imag;

    public:
            //setters :
            void setReal(float r){
                    real = r;
            }
            // Complex comp1 ;
            // comp1.setReal(4);
            //setReal(4);
            void setImag(float i){
                    imag = i;
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
            Complex add(Complex x ,Complex y){
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

};

int main(){

    Complex comp1 , comp2 , resultComp;
    float real , imag ;
    cout << "enter the real value and imag value of comp1" << endl ;
    cin >> real >> imag ;
    comp1.setReal(real);
    comp1.setImag(imag);

    cout << "enter the real value and imag value of comp2 " << endl;
    cin >> real >> imag ;
    comp2.setReal(real);
    comp2.setImag(imag);

    //cout << comp1.getReal() << endl;
    //cout << comp1.getImag() << endl;
    //cout << comp2.getReal() << endl;
    //cout << comp2.getImag() << endl;

    //comp1.print() ;
    resultComp =  comp1.add(comp1,comp2);
    resultComp.print();
    resultComp = comp1.subtract(comp1,comp2);
    resultComp.print();


    return 0;


