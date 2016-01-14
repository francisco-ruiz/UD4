#include <iostream>
using namespace std;

int fibonacci_recursivo(int numero){

	int fibonacci = 0;

	if (numero == 0)
		fibonacci = 0;
	if (numero == 1)
		fibonacci = 1;
 	if (numero > 1)
		fibonacci = fibonacci_recursivo(numero-1) + fibonacci_recursivo(numero-2);
	return fibonacci;
}

int fibonacci_iterativo(int numero){

	int fibonacci = 1, fib0 = 0, fib1 = 1;

	if (numero == 0)
		fibonacci = 0;
	if (numero == 1)
		fibonacci = 1;

	if (numero > 1){
	 	for (int n = 2; n <= numero; n++){
			fibonacci = fib0 + fib1;
			fib0 = fib1;
			fib1 = fibonacci;
		}
	}

	return fibonacci;

}

int main(){
	
	int numero = 0;

	do{
		cout << "Introduzca un número mayor o igual que 0: ";
		cin >> numero;
	}while (numero < 0);

	for (int n = 1; n <= numero; n++){
		cout << "\nEl valor de la sucesión de Fibonacci en el término " << n << " obtenido por un método iterativo es: " << fibonacci_iterativo(n) << endl;
		cout << "El valor de la sucesión de Fibonacci en el término " << n << " obtenido por un método recursivo es: " << fibonacci_recursivo(n) << endl;
	}

}
