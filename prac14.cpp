/*Define a function template in C++ to sort an array of elements of int
type, string type, float type and user-defined type Distance with data
members: kmeter & meter*/


#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Distance {
public:
    int kmeter;
    int meter;
    Distance(int km = 0, int m = 0){
        kmeter=km;
        meter=m;
    }
    bool operator>(const Distance& d) const {
        if (kmeter == d.kmeter){
            return meter > d.meter;}
        else{
        return kmeter > d.kmeter;
        }
    }
};

template <typename T>
void sortArray(T arr[], int size) {
    for (int i=0; i<size-1;i++) {
        for (int j=0;j<size-i-1;j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i=0;i<size;i++) {
        cout << arr[i] <<endl;
    }
}

int main() {

    int intArr[5] = {5, 3, 8, 1, 2};
    sortArray(intArr,5);
    cout << "Sorted int array: "<<endl;
    printArray(intArr, 5);

    float floatArr[5] = {5.5, 3.3, 8.8, 1.1, 2.2};

    sortArray(floatArr,5);
    cout << "Sorted float array: ";
    printArray(floatArr,5);

    string strArr[5] = {"akdr", "aman", "parihar", "aaditya","deo"};
    sortArray(strArr, 5);
    cout << "Sorted string array: ";
    printArray(strArr, 5);

    Distance distArr[4] = {Distance(2, 500), Distance(1, 750), Distance(2, 300), Distance(1, 900)};
    sortArray(distArr, 4);

    return 0;
}
