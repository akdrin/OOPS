#include<iostream>
using namespace std;

class Complex{
    private:
    double r;
    double i;
    public:
    Complex(){
        
    }
    Complex(double real,double img){
        r=real;
        i=img;
    }
   
   void add(Complex a,Complex b);

   void subtract(Complex a,Complex b);

   void display();


};

void Complex::add(Complex a,Complex b){
    r=a.r+b.r;
    i=a.i+b.i;
    
}
void Complex::subtract(Complex a,Complex b){
    r=a.r-b.r;
    i=a.i-b.i;
}
void Complex::display(){

    if(r<0) {
        cout<<r<<i<<'i'<<endl;
    }
    else
    cout<<r<<'+'<<i<<'i'<<endl;
}

int main(){
    Complex a(3,4);
    Complex b(4,6);
    a.display();
    Complex c;
    Complex d;
    c.add(a,b);
    c.display();
    d.subtract(a,b);
    d.display();
    
    return 0;

}


