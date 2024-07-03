#include <iostream>

using namespace std;

/**
 * @brief Checks if a number is prime.
 * 
 * This function uses recursion to determine if a given number n is prime.
 * It checks divisibility starting from 2 up to n-1.
 * 
 * @param n The number to check for primality.
 * @param x The current divisor being checked.
 * @return true if n is a prime number, false otherwise.
 */
bool isPrime(int n, int x) {
    if (n == 1 || n < 0)
        return false;
    if (n % x == 0 && n != x)
        return false;
    if (n == x)
        return true;
    return isPrime(n, x + 1);
}

/**
 * @brief Main function to test the isPrime function.
 * 
 * This function prompts the user to enter a number and then checks if the number
 * is prime using the isPrime function. It outputs the result to the console.
 * 
 * @return int Exit status of the program.
 */
int main() {
    int n, x;

    cout << "Determina si un valor dado es primo o no\n";
    cout << "Ingresa n:  ";
    cin >> n;

    if (isPrime(n, 2))
        cout << n << " es numero primo " << endl;
    else
        cout << n << " no es numero primo " << endl;

    return 0;
}
