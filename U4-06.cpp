#include <iostream>
using namespace std;

int ackerman_recursivo (int m, int n){

	int ackerman = 0;	

	if (m == 0)
		ackerman = n+1;
	if (m > 0 && n == 0)
		ackerman = ackerman_recursivo(m-1,1);
	if (m > 0 && n > 0)
		ackerman = ackerman_recursivo(m-1,ackerman_recursivo (m,n-1));

	return ackerman;
}

int main(){

	int m = 0, n = 0;

	do{
		cout << "Introduzca el primer número entero mayor o igual que 0 de la función de Ackerman: ";
		cin >> m;
	}while (m < 0);

	do{
		cout << "Introduzca el segundo número entero mayor o igual que 0 de la función de Ackerman: ";
		cin >> n;
	}while (n < 0);


	cout << "La función Ackerman (" << m << ", " << n << ") = " << ackerman_recursivo(m,n) << endl; 

}
