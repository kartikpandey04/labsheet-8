#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char name[50];
    int roll;
    float marks;

public:
    void input() {
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
