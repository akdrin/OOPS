#include<iostream>

using namespace std;

class Staff{
    private:

    int code;
    string name;

    public:

    Staff(){

    }

    Staff(int c,string n){
        code=c;
        name=n;
    }

    void display(){
        cout<<"Staff code:"<<code<<endl;
        cout<<"Staff Name:"<<name<<endl;
    }

};

class Education{
    private:
    string highestqG;
    string highestQ;

    public:

    Education(){

    }

    Education(string h1,string h2){
        highestqG=h1;
        highestQ=h2;
    }


    void display(){
        cout<<"Highest Qualification in General education: "<<highestqG<<endl;
        cout<<"Highest Qualification: "<<highestQ<<endl;
    }


};

class Teacher:public Staff,public Education{

    private:
    string subject;
    string publication;

    public:

    Teacher():Staff(),Education(){

    }

    Teacher(int c,string n,string h1,string h2,string sub,string pub):Staff(c,n),Education(h1,h2){

        subject=sub;
        publication=pub;

    }

    void display(){
        Staff::display();
        Education:: display();
        cout<<"Subject:"<<subject<<endl;
        cout<<"Publication:"<<publication<<endl;
    }

    ~Teacher(){

    }
    
};

class Typist: public Staff{

    private:
    int speed;

    public:
    Typist():Staff(){

    }

    Typist(int c,string n,int s):Staff(c,n){
        speed=s;
    }

    void display(){
        Staff::display();
        cout<<"Speed:"<<speed<<endl;
    }
};

class Officer: public Staff,public Education{
    private:
    char grade;

    public:

    Officer():Staff(),Education(){

    }

    Officer(int c,string n,string h1,string h2,char g):Staff(c,n),Education(h1,h2){
        grade=g;
    }

    void display(){
        Staff::display();
        Education::display();
        cout<<"Officer Grade: "<<grade<<endl;
    }

    ~Officer(){

    }

};

class Regular: public Typist{

    public:

    Regular():Typist(){

    }
    Regular(int c,string n,int s):Typist(c,n,s){

    }

    void display(){
        Typist::display();
    }

    ~Regular(){

    }

};

class Casual: public Typist{
    private:
    double dailyWages;

    public:

    Casual():Typist(){

    }

    Casual(int c,string n,int s,double dW):Typist(c,n,s){
        dailyWages=dW;

    }


    void display(){
        Typist:: display();
        cout<<"Daily wages:"<<dailyWages<<endl;
    }

    ~Casual(){
        
    }
};

int main(){

    Regular r1(9,"Aman Parihar",60);

    Casual c1(69,"Aaditya",30,100);

    Teacher t1(200,"AKDR","Btech","+2","CPP","Get ready with CPP");

    Officer o1(900,"Keshav","+2","BTech", 'C');


    r1.display();
    c1.display();
    t1.display();
    o1.display();
}