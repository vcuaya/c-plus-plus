#include <iostream>

using namespace std;

/**
 * @brief Recursively calculates how many times num is divisible by x.
 * 
 * @param num The number to be divided.
 * @param x The divisor.
 * @return int The number of times num is divisible by x.
 */
int f(int num, int x) {
    if (num < x)
        return 0;
    return 1 + f(num - x, x);
}

int main() {
    int n, x;

    cout << "Programa que indica cuantas veces un numero es divisible por otro\n";
    cout << "Ingresa numero y x: ";
    cin >> n >> x;

    cout << n << " es divisible por " << x << " en " << f(n, x) << " veces" << endl;

    return 0;
}
