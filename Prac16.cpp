/*Define a class Employee in C++ with members: name, age and salary
and methods: enterData() to enter the record of the employee through
keyboard, displayData() to display the details of the employee.
Define two user defined exceptions that are thrown when
a) The name entered has numeric character(s).
b) The age of the person is less than 18 or greater than 60*/
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    private:
    string name;
    int age;
    int salary;

    public:
    class Exception{

    };
    void enterData(){
        cout<<"Enter the name of the employee:"<<endl;
        cin>>name;
        for(char i : name){
            if(isdigit(i)) throw Exception();
            }
        cout<<"Enter the age of the employee:"<<endl;
        cin>>age;
        if(age<18 || age>60){
            throw Exception();
        }
        cout<<"Enter the salary:"<<endl;
        cin>>salary;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Salary"<<salary;
    
    }
    
};
int main(){
    try{
        Employee e1;
        e1.enterData();
        e1.display();
    }
    catch(Employee::Exception){
        cout<<"Error Occured";
    }
}