#include<iostream>

using namespace std;

class Publication{
    private:
    string title;
    float price;

    public:

    Publication(){

    }

    Publication(string t,float p){
        title=t;
        price=p;
    }

    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
    }

    ~Publication(){

    }

};

class Book: public Publication{
    private:
    int pageCount;

    public:

    Book():Publication(){

    }

    Book(string t,float p,int pg):Publication(t,p){
        pageCount=pg;

    }

    void display(){
        Publication::display();
        cout<<"Page Count: "<<pageCount<<endl;
    }

    ~Book(){

    }

};

class Tape: public Publication{
    private:
    int playingTime;

    public:
    Tape():Publication(){

    }

    Tape(string t,float p,int pt):Publication(t,p){
        playingTime=pt;
    }

    void display(){
        Publication::display();
        cout<<"Playing Time: "<<playingTime<<" minutes"<<endl;
    }

    ~Tape(){

    }

};

int main(){

    Book b1("Code With Maneet Singh",2000,200);
    Tape t1("Code with Maneet Singh AudioBook",4000,240);
    b1.display();
    t1.display();

}

