#include <iostream>
using namespace std;

class Distance2;
class Distance1 {
    private:
    double miles;

public:                                          
    Distance1(double m = 0){
        miles = m;
    }
    void addDistances(Distance2);
};

class Distance2 {
    private:
    int kilometers;
    int meters;

public:
    
    Distance2(int km = 0, int m = 0){
        kilometers = km;
        meters = m;
    }

     friend void Distance1 ::addDistances(Distance2);
};

void Distance1::addDistances(Distance2 d2){
    double totalMiles = miles + d2.kilometers + (d2.meters / 1609.34);
    cout<<totalMiles<<endl;
}
int main() {
    Distance1 dist1(3.0);
    Distance2 dist2(2, 500);
    dist1.addDistances(dist2);


    return 0;
}
