/*Define two classes Polar and Rectangle (using C++) to represent
points in polar and rectangle systems. Use the conversion routines to
convert from one class to the other class and vice versa.*/

#include<iostream>
#include<cmath>

using namespace std;
class Rectangle;
class Polar{
    private:
    float radius;
    float theta;

    public:
    Polar(){

    }
    Polar(float r,float t){
        radius=r;
        theta=t;
    }
    float getR(){
        return radius;
    }
    float getT(){
        return theta;
    }
    void display(){
        cout<<"The value of radius:"<<radius<<endl;
        cout<<"The value of theta:"<<theta<<endl;
    }

};
class Rectangle{
    private:
    float x,y;

    public:
    Rectangle(){

    }
    Rectangle(float a,float b){
        x=a;
        y=b;
    }
    Rectangle(Polar p){
        x=p.getR()*cos(p.getT());
        y=p.getR()*sin(p.getR());
    }

    operator Polar(){
        float a,b;
        a=sqrt(pow(x,2)+pow(y,2));
        b=atan(y/x);
        return Polar(a,b);
    }
    void display(){
        cout<<"The value of x is:"<<x<<endl;
        cout<<"The value of y is:"<<y<<endl;
    }
};

int main(){
    Rectangle r;
    Polar p(20,30);
    r=p;
    p.display();
    r.display();
    Polar p1;
    Rectangle r1(40,50);
    p1=r1;
    r1.display();
    p1.display();
}

