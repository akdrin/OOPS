#include<iostream>

using namespace std;

class Feet{

    private:
    int feet;

    public:

    Feet(){
        cout<<"Feet Defaut constructor called"<<endl;
    }
    Feet(int f){
        feet=f;
        cout<<"Feet Parametrized constructor called"<<endl;
    }
    ~Feet(){
        cout<<"Feet Destructor called"<<endl;
    }
};

class Inches{
    private:
    int in;
    
    public:

    Inches(){
        cout<<"Inches Defaut constructor called"<<endl;
    }

    Inches(int i){
        in=i;

        cout<<"Inches Parametrized constructor called"<<endl;
    }

    ~Inches(){
        cout<<"Inches Destructor called"<<endl;
    }

};

class Height{

    private:
    Inches inch;
    Feet feet;

    public:

    Height(){
        cout<<"Height Default constructor called"<<endl;
    }

    Height(int ft,int inc){

       feet= Feet(ft);
       inch= Inches(inc);
        cout<<"Height Parametrized constructor called"<<endl;
    }

    ~Height(){
        cout<<"Height Destructor called"<<endl;
    }

};

class Width{
    private:
    
    Feet ft;
    Inches in;
    
    public:

        Width(){
        cout<<"Width Default constructor called"<<endl;
    }

    Width(int f,int inc){

        ft=Feet(f);
        in=Inches(in);
        
        cout<<"Width Parametrized constructor called"<<endl;
    }

    ~Width(){
        cout<<"Width Destructor called"<<endl;
    }


};

class Building{
    public:
    
    Building(){
        cout<<"Building Default constructor called"<<endl;
    }
    Building(int hf,int hi,int wf,int wi){
           Height(hf,hi);
           Width(wf,wi);
           cout<<"Building Parametrized constructor called"<<endl;
    }

    ~Building(){
        cout<<"Building Destructor called"<<endl;
    }
};

int main(){

    Building b2(4,2,5,8);
}






