#include <iostream>
#include <conio.h>
//#include <graphics.h>

using namespace std;

class Point {
    private:
        int x;
        int y;

    public:
        Point(){
            x=0;
            y=0;
            cout << "Default Constructor of Point Class" << endl;
        }
        Point(int m , int n){
            x = m;
            y = n;
            cout << "Constructor with parameters of Point Class" <<endl;
        }
        ~Point(){
            cout << "Destructor of Point Class" <<endl;
        }
        void setX(int m){
            x = m;
        }
        void setY(int n){
            y = n;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }

};

class Line{
    private:
        Point start;
        Point end;
    public:
        Line() : start() , end(){
            cout << "Line Default Constructor" << endl;
        }
        Line(int x1,int y1 , int x2, int y2 ) : start(x1,y1) , end(x2,y2){
            cout << "Line Constructors with parameters" << endl;
        }
        ~Line(){
            cout << "Destructor of Line Class" << endl;
        }
        void draw(){
            //line(start.getX() , start.getY() , end.getX() , end.getY());
        }

};
class Rectangle {
    private:
        Point ul;
        Point lr;
    public:
        Rectangle() : ul() , lr(){
            cout << "Default Constructor of Rectangle Class" << endl;
        }
        Rectangle(int x1,int y1 ,int x2 , int y2) : ul(x1,y1) , lr(x2,y2){
            cout << "Rectangle Constructor with parameters " << endl;
        }
        ~Rectangle(){
                    cout << "Destructor of Rectangle Class" << endl;

        }
        void draw(){
            //rectangle(ul.getX() , ul.getY() , rl.getX() , rl.getY());
        }

};

class Circle {
    private:
        Point center;
        int radius;
    public:
        Circle() : center(){
            radius =0;
            cout << "Default Constructor of Circle Class" << endl;
        }
        Circle(int m,int n , int rad) : center(m,n) {
            radius = rad;
            cout << "Circle Constructor with parameters" << endl;
        }
        ~Circle(){
                        cout << "Destructor of Circle Class" << endl;

        }
        void draw(){
            //circle(center.getX() , center.getY() ,radius
        }

};

class Picture {
    private:
        int cNum;
        int rNum;
        int lNum;
        Circle *pCircles;
        Rectangle *pRectangles;
        Line *pLines;
    public:
        Picture(){
            cNum =0;
            rNum = 0;
            lNum = 0;
            pCircles = NULL;
            pRectangles = NULL;
            pLines = NULL;
            cout << "Default Constructor of Picture Class " << endl;
        }
        Picture(int cn , int rn , int ln , Circle *pC , Rectangle *pR , Line *pL){
            cNum =cn;
            int rNum = rn;
            int lNum = ln;
            pCircles = pC;
            pRectangles = pR;
            pLines = pL;
            cout << "Constructor with parameters of Picture Class" << endl;
        }
        ~Picture(){
                        cout << "Destructor of Picture Class" << endl;

        }
        void setLines(int ln , Line *linePTR){
            lNum = ln;
            pLines = linePTR;
        }
        void setCircles(int cl , Circle *circlePTR){
                cNum = cl;
                pCircles = circlePTR;
        }
        void setRectangles(int rn , Rectangle *rectanglePTR){
            rn = rNum;
            pRectangles = rectanglePTR;
        }

};

int main()
{

    //Point p1;
    //Point p2(2,3);
    //Line l1;
    //Line l2;
    //Line l3(1,2,3,4);

    //Rectangle r1;
    //Rectangle r2(5,6,7,8);

    //Circle c1;
    //Circle c2(2,5,6);
//

  //Picture p1;



    Circle cArr[3]= {Circle(50,50,50),Circle(200,100,100),Circle(20,20,22)};
    Rectangle rArr[2] = {Rectangle(1,2,3,4),Rectangle(5,6,7,8)};
    Line lArr[2] = {Line(1,2,3,4) , Line(1,2,3,4)};

    //p1.setCircles(3,cArr);
    //p1.setRectangles(2,rArr);
    //p1.setLines(2,lArr);


    Picture p2(3,2,2,cArr,rArr,lArr);
    return 0;
}
