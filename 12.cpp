#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { balance = 0; }

    void deposit(double amount) {
        if(amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if(amount <= balance) balance -= amount;
        else cout << "Insufficient balance!\n";
    }

    void showBalance() {
        cout << "Current Balance = " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(1000);
    acc.withdraw(300);
    acc.showBalance();

    return 0;
}
