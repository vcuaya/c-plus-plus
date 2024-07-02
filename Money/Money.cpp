#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

/**
 * @class Dinero
 * @brief A class to represent money with pesos and centavos.
 */
class Dinero {
	int pesos, centavos;
public:
	/**
	 * @brief Default constructor initializes pesos and centavos to 0.
	 */
	Dinero() {
		pesos = centavos = 0;
	}

	/**
	 * @brief Parameterized constructor to initialize pesos and centavos.
	 * @param pesos Initial pesos.
	 * @param centavos Initial centavos.
	 */
	Dinero(int pesos, int centavos) {
		this->pesos = pesos;
		this->centavos = centavos;
	}

	/**
	 * @brief Displays the current amount of money.
	 */
	void show();

	/**
	 * @brief Increments centavos by 1.
	 * @return true if increment is successful.
	 */
	bool incrementarCentavos();

	/**
	 * @brief Increments centavos by a specified amount.
	 * @param centavos Amount to increment.
	 * @return true if increment is successful, false otherwise.
	 */
	bool incrementarCentavos(int centavos);

	/**
	 * @brief Increments pesos by 1.
	 * @return true if increment is successful.
	 */
	bool incrementarPesos();

	/**
	 * @brief Increments pesos by a specified amount.
	 * @param pesos Amount to increment.
	 * @return true if increment is successful, false otherwise.
	 */
	bool incrementarPesos(int pesos);
};

void Dinero::show() {
	if (centavos < 10)
		cout << "$" << pesos << ".0" << centavos;
	else
		cout << "$" << pesos << "." << centavos;
}

bool Dinero::incrementarCentavos() {
	centavos++;

	if (centavos >= 100) {
		pesos++;
		centavos -= 100;
	}

	return true;
}

bool Dinero::incrementarCentavos(int centavos) {
	if (centavos > 0) {
		this->centavos += centavos;

		while (this->centavos >= 100) {
			pesos++;
			this->centavos -= 100;
		}

		return true;
	}
	else
		return false;
}

bool Dinero::incrementarPesos() {
	pesos++;

	return true;
}

bool Dinero::incrementarPesos(int pesos) {
	if (pesos > 0) {
		this->pesos += pesos;

		return true;
	}
	else
		return false;
}

/**
 * @brief Clears the screen and displays the header.
 */
void cabecera() {
	system("cls");

	cout << "Banco de Ejercicios";
	cout << "\nClase Dinero\n";
}

/**
 * @brief Displays the menu options.
 */
void menu() {
	cabecera();

	cout << "\n1) Incrementar Centavos";
	cout << "\n2) Incementar Pesos";
	cout << "\n3) Ingresar Centavos";
	cout << "\n4) Ingresar Pesos";
	cout << "\n5) Mostrar Dinero";
	cout << "\n0) Salir" << endl;
	cout << "\nIntroduce la opcion deseada\n";
}

int main() {
	Dinero cuenta, cuenta1(1500, 50);
	int pesos, centavos;
	char opc;

	do {
		menu();

		cin >> opc;

		switch (opc)
		{
		case '1':
			cabecera();

			cout << "\nIncremento unitario en centavos\n";
			cuenta.show();
			cout << endl << endl;
			cuenta.incrementarCentavos();

			cout << "Se realizo el incremento correctamente\n";
			cuenta.show();
			cout << endl << endl;

			system("pause");
			break;
		case '2':
			cabecera();

			cout << "\nIncremento unitario en pesos\n";
			cuenta.show();
			cout << endl;
			cuenta.incrementarPesos();

			cout << "\nSe realizo el incremento correctamente\n";
			cuenta.show();
			cout << endl << endl;

			system("pause");
			break;
		case '3':
			cabecera();

			cout << "\nIngresa los centavos a incrementar\n";
			cin >> centavos;

			if (cuenta.incrementarCentavos(centavos)) {
				cout << "\nSe realizo el incremento correctamente\n";
				cuenta.show();
				cout << endl << endl;
			}
			else
				cout << "\nNo se pudo realizar el incremento, intenta nuevamente\n\n";

			system("pause");
			break;
		case '4':
			cabecera();

			cout << "\nIngresa los pesos a incrementar\n";
			cin >> pesos;

			if (cuenta.incrementarPesos(pesos)) {
				cout << "\nSe realizo el incremento correctamente\n";
				cuenta.show();
				cout << endl << endl;
			}
			else
				cout << "\nNo se pudo realizar el incremento, intenta nuevamente\n\n";

			system("pause");
			break;
		case '5':
			cabecera();

			cout << "\nEl total de la cuenta es:\n";
			cuenta.show();

			cout << "\n\nLa segunda instancia creada con sobrecarga de constructores es:\n";
			cuenta1.show();
			cout << endl << endl;

			system("pause");
			break;
		case '0':
			system("cls");
			
			cout << "Programa finalizado!\n";
			break;
		default:
			system("cls");

			cout << "\a\a\aPor favor introduce una opcion valida\n";
			cout << endl;
			
			system("pause");
			break;
		}
	} while (opc != '0');
	return 0;
}
