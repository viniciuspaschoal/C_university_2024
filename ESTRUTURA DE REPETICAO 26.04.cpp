#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	
	const int peperoni = 50, marguerita = 45, frango = 60, coca = 10, agua = 6;
	int totpeperoni = 0, totmarguerita = 0, totfrango = 0, totcoca = 0, totagua = 0;
	int qntpeperoni = 0, qntmarguerita = 0, qntfrango = 0, qntcoca = 0, qntagua = 0;
	int total;
	int opcao;
	
	
	cout << "BEM VINDO A PIZZARIA!\n";
	cout << "\n";
	
	while(opcao != 6){
		
	cout << "MENU:\n";
	cout << "\n";
	cout << "1- Peperoni: R$50,00\n";
	cout << "2- Marguerita: R$45,00\n";
	cout << "3- Frango c/ catupiry: R$60,00\n";
	cout << "4- Coca-Cola: R$10,00\n";
	cout << "5- Água saborizada: R$6,00\n";
	cout << "6- Sair";
	cout << "\n";
	cout << "Tecle o número correspondente com seu desejo: ";
	cin >> opcao;
	
	while(opcao < 1 || opcao > 6){
	cout << "\n";
	cout << "Escreva uma opção válida.\n";
	cout << "Tecle o número correspondente com seu desejo: ";
	cin >> opcao;}
	
	
	switch(opcao){
		case 1: 
		system("cls");
		cout << "Quantas pizzas de peperoni você deseja? ";
		cin >> qntpeperoni;
		system("cls");
		break;
		
		case 2: 
		system("cls");
		cout << "Quantas pizzas de marguerita você deseja? ";
		cin >> qntmarguerita;
		system("cls");
		break;
		
		case 3: 
		system("cls");
		cout << "Quantas pizzas de frango c/ catupiry você deseja? ";
		cin >> qntfrango;
		system("cls");
		break;
		
		case 4: 
		system("cls");
		cout << "Quantas Coca-cola você deseja? ";
		cin >> qntcoca;
		system("cls");
		break;
		
		case 5: 
		system("cls");
		cout << "Quantas garrafas de água saborizada você deseja? ";
		cin >> qntagua;
		system("cls");
		break;
		
		default:0;
		
		}
		totpeperoni = qntpeperoni * peperoni;
		totmarguerita = qntmarguerita * marguerita;
		totfrango = qntfrango * frango;
		totcoca = qntcoca * coca;
		totagua = qntagua * agua;
		
		
		total = (totpeperoni + totmarguerita + totfrango + totcoca + totagua);
		
		if(opcao == 6){
			
		system("cls");	
		cout << "Seu carrinho: \n";
		cout << "\n";
		cout << "Peperoni: R$ " << totpeperoni << endl;
		cout << "Marguerita: R$ " << totmarguerita << endl;
		cout << "Frango c/ catupiry: R$ " << totfrango << endl;
		cout << "Coca-Cola: R$ " << totcoca << endl;
		cout << "Água saborizada: R$ " << totagua << endl;
		cout << "\n";
		cout << "Portanto, o total do seu carrinho está em R$: " << total << endl;
		
		}
		
	
		
	}
	
	
	
	}
	
	
	
	
	
	
	
	
	
