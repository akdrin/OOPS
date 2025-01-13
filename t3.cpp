#include<iostream>
#include<typeinfo>
using namespace std;

class Base{
    int data;

    public:

    virtual void display(){

    }
};

class Derived:public Base{
    int data;

    public:

    void display() override{
        cout<<"HEllo"<<endl;
    }
};

int main(){

    Derived *d= new Derived();
    Base* ptr=d;
    Derived *p;
    p=dynamic_cast<Derived*>(ptr);

    ptr->display();
    p->display();

    cout<<typeid(p).name()<<endl;

    delete ptr;
}