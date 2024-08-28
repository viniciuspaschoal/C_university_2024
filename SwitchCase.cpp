#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main(){
	
	system ("cls");
	// Função para portugues
	setlocale(LC_ALL, "portuguese");
	
	//Variáveis
	char op; // 
	double num1, num2;
	
	cout << "CALCULADORA:" << endl;
	cout << '\n';
	cout << "Digite sua operação neste formato:" << endl;
	cout << '\n'
	cout << "Primeiro número, operação desejada, segundo número." << endl;
	cin >> num1 >> op >> num2;
	
	
	switch(op){
		
		case '+': 
			cout << "Resultado = " << num1 + num2;
		break;
		
		case '-':
			cout << "Resultado = " << num1 - num2;
		break;
			
		case '*':
			cout << "Resultado = " << num1 * num2;
		break;
		
		case'/':
			if(num2 != 0)
			cout << "Resultado = " << num1 / num2;
			else
			cout << "Não é possível realizar a divisão por 0.";
		break;	
		
		default: 
			cout << "Sinal inválido";
		
			
		
		
		
	}
	
	
}
