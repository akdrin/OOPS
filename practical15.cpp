/*Define a template class LinkedList in C++ with the following
member functions:
createList(), displayList(), insertElement(), and deleteElement();
In the main() function invoke above functions for the list of integer
numbers, floating numbers, and complex numbers*/

#include <iostream>
#include <complex>
using namespace std;

template <typename T>
class LinkedList {
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void createList(T arr[], int size) {
        for (int i = 0; i < size; ++i) {
            insertElement(arr[i]);
        }
    }

    void displayList() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void insertElement(T value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

    void deleteElement(T value) {
        if (!head) return;
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next && current->next->data != value) {
            current = current->next;
        }
        if (current->next) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }
};

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    complex<double> complexArr[] = { {1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5} };

    LinkedList<int> intList;
    intList.createList(intArr, 5);
    intList.displayList();
    intList.insertElement(6);
    intList.displayList();
    intList.deleteElement(3);
    intList.displayList();

    LinkedList<float> floatList;
    floatList.createList(floatArr, 5);
    floatList.displayList();
    floatList.insertElement(6.6);
    floatList.displayList();
    floatList.deleteElement(2.2);
    floatList.displayList();

    LinkedList<complex<double>> complexList;
    complexList.createList(complexArr, 5);
    complexList.displayList();
    complexList.insertElement({6, 6});
    complexList.displayList();
    complexList.deleteElement({3, 3});
    complexList.displayList();

    return 0;
}
