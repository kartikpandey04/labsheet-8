#include <iostream>
#include <cstring>
using namespace std;

class Car {
public:
    char brand[50];
    float price;

    void input() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car c1, c2;

    cout << "Enter details of Car 1\n";
    c1.input();
    cout << "Enter details of Car 2\n";
    c2.input();

    cout << "\nCar Details:\n";
    c1.display();
    c2.display();

    return 0;
}
