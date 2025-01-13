#include<iostream>
using namespace std;

class Distance{

    private:
    int km,meter;

    public:

    Distance(){   
    }
    Distance(float miles){
        float k=miles*1.609;
        km=k;
        meter=(k-km)*1000;
    }

    operator float(){
        float miles;
        miles=(km+meter/1000)/1.609;
        return miles;
    }
    void display(){
        cout<<"Distance in Km: "<<km<<endl;
        cout<<"Distance in meter: "<<meter<<endl;
    }

};

int main(){
    Distance d1(230);
    float f=d1;

    cout<<"The value of f is "<<f<<endl;
    d1.display();

    Distance d2;
    d2=234;
    d2.display();

    return 0;
}