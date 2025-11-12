#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    cout << ((x < y) && (y > 0)) << endl;
    cout << ((x > y) || (y > 0)) << endl;
    cout << (!(x == y));
    return 0;
}
