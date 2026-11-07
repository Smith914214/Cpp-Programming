#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string hex;
    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int len = hex.length();
    int base = 1;
    int decimal = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        }
        base *= 16;
    }

    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}