#include <iostream>
#include <locale>

using namespace std;
int main() {
	locale::global(locale("pt_BR.UTF-8"));

	//NUMERO DE 1 A 10
	/*int numero = 1;
	while (numero <= 10)
	{
		cout << numero << "\n";
		numero += 1;
	}*/


	//TABUADA
	/*int tabuada;
	cout << "informe um numero: ";
	cin >> tabuada;
	for (int j = 1; j <= 10; j++) {
		int resultado = tabuada * j;
		cout << tabuada << "x" << j << " = " << resultado << "\n";
	}*/


	// DE 0 A 50
	/*int numero = 0;
	while (numero <= 50)
	{
		cout << numero << "\n";
		numero += 5;
	}*/


	// ESCREVA 5 NUMEROS
	/*int num;
	cout << "Informe 5 número\n";
	cin >> num;
	for (int i = 1; i < 5; i++)
	{
		if (num > 100) {
			cout << "Número especial \n";
			cin >> num;
		}
		else
		{
			cout << "Número Comum \n";
			cin >> num;
		}
	}*/


	//DE 1 A 31
	/*int num = 1;
	do {
		cout << num << "\n";
		num += 2;
	} while (num <= 31);*/



	//NÚMERO POSITIVO E NÚMERO NEGATIVO
	/*int num;

	for (int g = 0; g < 5; ++g) {
		cout << "Digite um número " <<"\n";
		cin >> num;

		if (num > 0) {
			cout << "Número Positivo" << "\n";
		}
		else if (num < 0) {
			cout << "Número Negativo" << "\n";
		}
		else {
			cout << "O Número é Zero" << "\n";
		}
	}*/
}