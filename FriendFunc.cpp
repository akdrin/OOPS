#include<iostream>
using namespace std;

class Distance1{
    private :
    int miles;
    public :
    Distance1(int miles){
        this->miles = miles;
    }

friend class Distance2;
};

class Distance2{
    private :
    int kilometers;
    int meter;
    public :
    Distance2(int kilometers, int meter){
        this->kilometers = kilometers;
        this->meter = meter;
    }

    void add(Distance1 d1, Distance2 d2){
        cout << "Total distance in miles: " << d1.miles +(d2.meter/1000 +d2.kilometers)*1.60934 << endl;
    }


};

int main(){
    Distance1 d1(10);
    Distance2 d2(20,10);
    d2.add(d1, d2);
    return 0;
}

