#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, total, average;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    average = total / 3;
    cout << "Total = " << total << ", Average = " << average;
    return 0;
}
