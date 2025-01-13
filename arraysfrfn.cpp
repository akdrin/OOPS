
/* A programmer wants to manipulate arrays. Two arrays are equal if
(a) they have the same dimension, (b) are of the same size, and (c)
contain identical values in their corresponding elements. Comparison
is done using the operator == which returns true or false. Also,
arrays can be copied to one another using the operator =.
Using friend function.
*/


#include <iostream>
using namespace std;

class Array {
private:
    int* data;
    int size;

public:

    Array(int arr[], int sz) {
        size = sz;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = arr[i];
        }
    }

    Array(const Array& other) {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    ~Array() {
        delete[] data;
    }

    Array& operator=(const Array& rhs) {
        if (this != &rhs) { 
            delete[] data; 
            size = rhs.size;
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = rhs.data[i];
            }
        }
        return *this;
    }

    friend bool operator==(const Array& arr1, const Array& arr2) {
        if (arr1.size != arr2.size) {
            return false;
        }
        for (int i = 0; i < arr1.size; i++) {
            if (arr1.data[i] != arr2.data[i]) {
                return false;
            }
        }
        return true;
    }

    void display() const {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    int arr3[] = {4, 5, 6};

    Array ar1(arr1, 3);
    Array ar2(arr2, 3);
    Array ar3(arr3, 3);

    cout << "Array1 == Array2: " << (ar1 ==ar2?"True":"False")<<endl;
    cout << "Array1 == Array3: " << (ar1 ==ar3?"True":"False")<<endl;

    ar3 = ar1;
    cout << "Array3 after assignment from Array1: ";
    ar3.display();

    return 0;
}

/*
Team member:
Aman Kumar(231034014)
Aaditya Kumar(231034016)
*/