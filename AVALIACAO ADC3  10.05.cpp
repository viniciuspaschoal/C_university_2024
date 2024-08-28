#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	
	const int calca_jeans = 200, camisa = 250, meia = 50, camiseta = 100;
	int set_bonus = 500, calc_bonus = set_bonus;
	int opcao;
	char saida;
	
	
	
	
	while(saida != 'S' || saida != 's'){
	cout << "BEM VINDO AO LOJÃO!\n";
	cout << "\n";
	cout << "MENU:\n";
	cout << "\n";
	cout << "1- Calça jeans: R$200,00\n";
	cout << "2- Camisa: R$250,00\n";
	cout << "3- Meia: R$50,00\n";
	cout << "4- Camiseta: R$100,00\n";
	cout << "5- Sair";
	cout << "\n";
	cout << "Tecle o número correspondente com seu desejo: ";
	cin >> opcao;
	
	while(opcao < 1 || opcao > 5){
	cout << "\n";
	cout << "Escreva uma opção válida.\n";
	cout << "Tecle o número correspondente com seu desejo: ";
	cin >> opcao;
	}
	
	
	switch(opcao){
		case 1:
		
		if(calc_bonus >=200 ){	
		calc_bonus = calc_bonus - calca_jeans;
		system("cls");
		} else {
			system("cls");
			cout << "Você não pode comprar esse ítem!" << endl;
		}
		break;
		
		case 2:
		if(calc_bonus >=250 ){
		calc_bonus = calc_bonus - camisa;
		system("cls");
		} else {
			system("cls");
			cout << "Você não pode comprar esse ítem!" << endl;
		}
		break;
		
		case 3:
		if(calc_bonus >=50 ){
		
		calc_bonus = calc_bonus - meia;
		system("cls");
		} else {
			system("cls");
			cout << "Você não pode comprar esse ítem!" << endl;
		}
		break;
		
		case 4:
		if(calc_bonus >=100 ){
		
		calc_bonus = calc_bonus - camiseta;
		system("cls");
		} else {
			system("cls");
			cout << "Você não pode comprar esse ítem!" << endl;
		}
		break;
		
			case 5:
			cout << '\n';
			cout << "Você realmente deseja sair? (S/N)";
			cin >> saida;
			system("cls");			
			break;
		
		
		default:0;
		
		}
			if(saida == 'S' || saida == 's'){
				system("cls");
				cout << "Restaram R$ " << calc_bonus <<" de bonus." << endl;
				cout << '\n';
				cout << "Sua compra está em R$ " << set_bonus-calc_bonus << ".";
				cout << '\n';
				break;
			}
			
			if (calc_bonus == 0){
				system("cls");
				cout << "Seu bônus zerou!\n";
				cout << "\n";
				cout << "Sua compra está em R$ " << set_bonus-calc_bonus << ".";
				cout << '\n';
				break;
			} 
	

	} 					
			
}
	



			
	
	
	
