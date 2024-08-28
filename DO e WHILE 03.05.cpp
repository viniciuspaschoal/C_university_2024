#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	int numero;
	int continuar;
	
	// loop principal
	do{
		cout << "Digite um número: "; // Solicita a inserir um número
		cin >> numero;
		
		cout << "Você digtou: " << numero << endl; // Mostra o número inserido
		
		cout << "Deseja inserir outro número? (S/N): "; //Pergunta se o usuario deseja continuar
		cin >> continuar;
	}
	while(continuar == 'S' || continuar == 's'); // continua o loop enquanto a resposta for S ou s
	
	cout << "Programa encerrado.\n";
	
}
