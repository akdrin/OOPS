#include<iostream>
using namespace std;

class Singleton{
    private:
    static Singleton ins;
    Singleton(){
        cout<<"Constructor called"<<endl;
    }
    ~Singleton(){
        cout<<"Destructor called"<<endl;
    }
    public:
    static Singleton& getInstance(){
        return ins;
    }
   static void set(Singleton& instance){
        ins = instance;
    }
};

Singleton Singleton::ins;

int main(){
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();
    Singleton::set(s1);
    Singleton& s3 = s1;

    if(&s1 == &s2) cout<<"Singleton"<<endl;

    cout<<&s1<<endl;
    cout<<&s2<<endl;
    cout<<&s3<<endl;
    return 0;
}