#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function for integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function for doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Integer Addition: " << c.add(10, 20) << endl;
    cout << "Double Addition : " << c.add(10.5, 20.7) << endl;

    return 0;
}
