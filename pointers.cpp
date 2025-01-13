#include<iostream>

using namespace std;

class Complex{

    private:
    int real;
    int img;

    public:
    Complex(){

    }

    Complex(int real,int img){
        this->real=real;
        this->img=img;
    }

     void operator +=(Complex &a){
        real+=a.real;
        img += a.img;
    }

    void display(){
        cout<<"Real part is "<<real<<endl;
        cout<<"Img part is "<<img<<endl;
    }

};

int main(){

    Complex c1(4,5);
    Complex c2(5,7);

    c1+=c2;

    c1.display();
    
}