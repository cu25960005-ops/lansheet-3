#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, rate, time, amount, ci;
    cout << "Enter principal, rate, and time: ";
    cin >> principal >> rate >> time;
    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;
    cout << "Compound Interest = " << ci;
    return 0;
}
