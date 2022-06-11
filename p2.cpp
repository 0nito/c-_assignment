// ATM Banking System - Basil Ahmed

#include <iostream>
#include <sstream>  
using namespace std;

#define PASS 7789 // pasword
#define BALANCE 6123.5 // current balance
int main() {
    int pass, withdraw;
    cout << "Enter Password: ";
    cin >> pass;
    if (pass != PASS) { // if password incorrect
    cout << "Incorrect password" << endl;
    return 1;
    }
    cout << "Account Balanace: " << BALANCE << endl;
    cout << "Enter the amount you would like to withdraw: ";
    cin >> withdraw;
    cout << "Remaining Balance: " << BALANCE-withdraw << endl;

    return 0;
}