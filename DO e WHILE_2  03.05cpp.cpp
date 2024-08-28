#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	
	char escolha;
	float temperatura, resultado;
	
	do{
		cout << "Escolha uma conversão:\n";
		cout << "1. Celcius para Fahrenheit\n";
		cout << "2. Fahrenheit para celcius\n";
		cout << "3. Sair\n";
		cout << "Digite o número da conversão desejada: ";
		cin >> escolha;
		system("cls");
	
	switch(escolha){
		case '1':
			cout << "Digite a temperatura em celcius: ";
			cin >> temperatura;
			resultado = (temperatura * 9.0 / 5.0) + 32;
			cout << "Temperatura em fahrenheit: " << resultado << endl;
			break;
	
	case '2':
		cout << "Digite a temperatura em fahrenheit: ";
		cin >> temperatura;
		resultado = (temperatura - 32.0) * 5.0 / 9.0;
		cout << "Temperatura em celcius: " << resultado << endl;
		break;
	
	case '3':
		cout << "Encerrando o programa...\n";
		break;
	
	default:
		cout << "Opção inválida. Tente novamente.\n";
	} 
} while(escolha != '3');
	
	
}
