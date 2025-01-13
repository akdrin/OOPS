/*Write a program in C++ that demonstrates handling of exceptions in
inheritance tree. For example, create a base class called ―Father‖ and
derived class called ―Son‖ which extends the base class. In Father
class, implement a constructor which takes the age and throws the
exception WrongAge() where the input age < 0. In Son class,
implement a constructor that uses both father and son‘s age and
throws an exception if son‘s age is >= father‘s age.*/

#include <iostream>
#include <stdexcept>
using namespace std;

class WrongAge : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid age!";
    }
};

class Father {
protected:
    int fatherAge;

public:
    Father(int age) {
        if (age < 0)
            throw WrongAge();
        fatherAge = age;
        cout << "Father's age: " << fatherAge << endl;
    }
};

class Son : public Father {
    int sonAge;

public:
    Son(int fatherAge, int sonAge) : Father(fatherAge) {
        if (sonAge >= fatherAge)
            throw WrongAge();
        this->sonAge = sonAge;
        cout << "Son's age: " << sonAge << endl;
    }
};

int main() {
    try {
        int fatherAge, sonAge;
        cout << "Enter father's age: ";
        cin >> fatherAge;
        cout << "Enter son's age: ";
        cin >> sonAge;

        Son s(fatherAge, sonAge);
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
