#include <iostream>
using namespace std;

int factorial_iterativo (int numero){

	int factorial = 1;

	for (int n=1; n <= numero; n++)
		factorial = factorial * n;

	return factorial;
}

int factorial_recursivo (int numero){

	int factorial = 1;

	if (numero == 0)
		factorial = 1;
	else
		factorial = numero * factorial_recursivo(numero - 1);

	return factorial;
}


int main(){
	
	int numero = 0;

	do{
		cout << "Introduzca un número mayor o igual que 0: ";
		cin >> numero;
	}while (numero < 0);

	cout << "\nEl factorial del número " << numero << " obtenido por un método iterativo es: " << factorial_iterativo(numero) << endl;
	cout << "El factorial del número " << numero << " obtenido por un método recursivo es: " << factorial_recursivo(numero) << endl;
}
