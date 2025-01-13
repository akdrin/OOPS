#include<iostream>
using namespace std;
class Student{
    private:
    static int totalStudents;

    public:
    Student(){
        totalStudents++;
    }

    static int getTotalStudent() {
            return totalStudents;
    }
};
int Student::totalStudents=0;

int main(){
    Student s1;
    Student s2;
    cout<<Student::getTotalStudent();
}
