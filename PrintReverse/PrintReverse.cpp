#include <iostream>

using namespace std;

/**
 * @brief Recursively prints numbers from n to 0.
 * 
 * @param n The starting number.
 */
void PrintToZero(int n) {
    if (n == 0)
        cout << n << endl;
    else
    {
        cout << n << " ";
        PrintToZero(n - 1);
    }
}

/**
 * @brief Recursively prints numbers from 0 to n.
 * 
 * @param n The ending number.
 */
void PrintToN(int n) {
    if (n == 0)
        cout << n << " ";
    else {
        PrintToN(n - 1);
        cout << n << " ";
    }
}

int main() {
    int n;

    cout << "Ingresa n: ";
    cin >> n;
    
    PrintToN(n);
    cout << endl;
    
    PrintToZero(n);
}
