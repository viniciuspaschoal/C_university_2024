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
		cout << "Digite um n�mero: "; // Solicita a inserir um n�mero
		cin >> numero;
		
		cout << "Voc� digtou: " << numero << endl; // Mostra o n�mero inserido
		
		cout << "Deseja inserir outro n�mero? (S/N): "; //Pergunta se o usuario deseja continuar
		cin >> continuar;
	}
	while(continuar == 'S' || continuar == 's'); // continua o loop enquanto a resposta for S ou s
	
	cout << "Programa encerrado.\n";
	
}
