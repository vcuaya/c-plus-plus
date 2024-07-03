#include <iostream>

using namespace std;

/**
 * @brief Converts a decimal number to binary (iterative method).
 *
 * This function converts a given decimal number to its binary representation
 * using an iterative approach. It stores the binary digits in an array and
 * prints them in reverse order.
 *
 * @param num The decimal number to be converted.
 */
void DecimalToBinary(int num) {
	int i, n = 0, bin[64];

	while (num > 0) {
		bin[n++] = num % 2;
		num /= 2;
	}
	for (i = n - 1; i >= 0; i--)
		cout << bin[i];
}

/**
 * @brief Converts a decimal number to binary (recursive method).
 *
 * This function converts a given decimal number to its binary representation
 * using a recursive approach. It prints the binary digits in the correct order
 * by recursively dividing the number by 2.
 *
 * @param num The decimal number to be converted.
 */
void DecimalToBinaryRecursive(int num) {
	if (num > 0) {
		DecimalToBinaryRecursive(num / 2);
		cout << num % 2;
	}
}

/**
 * @brief Main function to test the DecimalToBinary and DecimalToBinaryRecursive functions.
 *
 * This function prompts the user to enter a decimal number and then converts it to binary
 * using both the iterative and recursive methods. It outputs the results to the console.
 *
 * @return int Exit status of the program.
 */
int main() {
	int num;

	cout << " Ingresa numero en base 10: ";
	cin >> num;

	cout << "\nIterativo\n ";
	cout << "\tnum = ";
	DecimalToBinary(num);

	cout << "\nRecursivo\n ";
	cout << "\tnum = ";
	DecimalToBinaryRecursive(num);
	return 0;
}
