#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main(){
	
	system ("cls");
	// Fun��o para portugues
	setlocale(LC_ALL, "portuguese");
	
	//Vari�veis
	char op; // 
	double num1, num2;
	
	cout << "CALCULADORA:" << endl;
	cout << '\n';
	cout << "Digite sua opera��o neste formato:" << endl;
	cout << '\n'
	cout << "Primeiro n�mero, opera��o desejada, segundo n�mero." << endl;
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
			cout << "N�o � poss�vel realizar a divis�o por 0.";
		break;	
		
		default: 
			cout << "Sinal inv�lido";
		
			
		
		
		
	}
	
	
}
