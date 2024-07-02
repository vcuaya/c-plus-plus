#include <iostream>
using namespace std;

/**
 * @brief Counts the number of characters in a string recursively.
 *
 * @param palabra The string whose characters are to be counted.
 * @param i The current index in the string.
 * @return int The number of characters in the string.
 *
 * Example of a function trace:
 * (cuenta("prueba"))
 * (1 + cuenta("rueba"))
 * (1 + (1 + cuenta("ueba")))
 * (1 + (1 + (1 + cuenta("eba"))))
 * (1 + (1 + (1 + (1 + cuenta("ba")))))
 * (1 + (1 + (1 + (1 + (1 + cuenta("a"))))))
 * (1 + (1 + (1 + (1 + (1 + (1 + cuenta("")))))))
 * (1 + (1 + (1 + (1 + (1 + (1 +  0))))))
 * (1 + (1 + (1 + (1 + (1 +  1)))))
 * (1 + (1 + (1 + (1 +  2))))
 * (1 + (1 + (1 +  3)))
 * (1 + (1 +  4))
 * (1 +  5)
 * 6
 */
int cuenta(char palabra[], int i) {
	if (palabra[i] == '\0')
		return 0;
	return 1 + cuenta(palabra, i + 1);
}

int main() {
	char cad[50];

	cout << "Ingresa una frase (maximo 50 caracteres) \n";
	cin.getline(cad, 50);

	cout << "La frase tiene " << cuenta(cad, 0) << " caracteres\n";

	return 0;
}