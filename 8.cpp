#include <iostream>
using namespace std;

int main() {
    float km;
    cout << "Enter distance in kilometers: ";
    cin >> km;
    cout << "Meters = " << km * 1000 << endl;
    cout << "Centimeters = " << km * 100000;
    return 0;
}
