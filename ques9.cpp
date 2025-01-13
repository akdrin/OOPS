//Team members name : Aaditya Kumar and aman Kumar
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

map<string, string> directory;



void readDirectoryFromFile() {
    ifstream file("directory.txt");
    string line;
    while (getline(file, line)) {
        string name, phone;
        istringstream iss(line);
        iss >> name >> phone;
        directory[phone] = name;
    }
    file.close();
}   

void addOrUpdatePhoneNumber() {
    string name, phone;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter phone number: ";
    cin >> phone;
    directory[phone] = name;
    ofstream file("directory.txt");
    for (auto &entry : directory) {
        file << entry.second << " " << entry.first << endl;
    }
    file.close();
}

void findPhoneNumberByName() {
    string name;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
    for (auto &entry : directory) {
        if (entry.second == name) {
            cout << "Phone number: " << entry.first << endl;
            return;
        }
    }
    cout << "Name not found in directory." << endl;
} 
    string phone;
    cout << "Enter phone number: ";
    cin >> phone;
    if (directory.find(phone)!= directory.end()) {
        cout << "Name: " << directory[phone] << endl;
    } else {
        cout << "Phone number not found in directory." << endl;
    };
    int main() {
        readDirectoryFromFile();
        int choice;
        do {
            cout << "\n1. Add/Update phone number\n2. Find phone number by name\n3. Find phone number by number\n4. Exit\n";
            cin >> choice;
            switch (choice) {
                case 1:
                    addOrUpdatePhoneNumber();
                    break;
                case 2:
                    findPhoneNumberByName();
                    break;
                case 3:
                    findPhoneNumberByNumber();
                    break;
                case 4:
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice!= 4);
        return 0;
    }
