#include<iostream>

using namespace std;

class Base{

    protected:
    int value;

    public:
    Base(){
        
    }
    Base(int value){
        this->value=value;
    }

    virtual void display(){
        cout<<"the value of value is:"<<value<<endl;
    }

};

class Derived:public Base{
    
    private:    
    int derval;

    public:
     Derived():Base(){
    }

    Derived(int val=0,int derval=0):Base(val){
        this->derval=derval;

    }

    void display(){
        Base::display();
        cout<<"The value of der val is"<<derval<<endl;
    }
};

int main(){

    Base* b= new Derived(6,8);

    b->display();
}