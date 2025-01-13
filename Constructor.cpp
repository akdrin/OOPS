#include<iostream>
using namespace std;

class String{
    public:
    string str;
    
    String(){
        cout<<"Default constructor called"<<endl;
    }
    String(string str){
        cout<<"Parameterized constructor called"<<endl;
        this->str=str;
    }
    void concat(String *str1, String *str2){
        this->str=str1->str+str2->str;
    }
    void display(){
        cout<<"String: "<<str<<endl;
    }
    ~String(){
        cout<<"Destructor called"<<endl;
    }

};

int main(){
    String *s1=new String("hello");
    String *s2=new String("World");
    String *s3= new String();
    s3->concat(s1,s2);
    s1->display();
    s3->display();  
    delete s1;
    delete s2;
    delete s3;
}

