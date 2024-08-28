#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

int main(){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	
	//Declara um vetor para armazenar as notas do alunos
	vector<double>notas;
	
	//Declara vari�veis
	//A m�dia das notas e a resposta do usu�rio sobre adicionar outra nota
	double notas, media;
	char adicionarOutraNota;
	
	do{
		//Solicita
		
		cout << "Digite a nota: ";
		cin >> notas;
		
		//Adicionar a nota inserida pelo usu�rio ao vetor de  notas
		notas.push_back (notas);
		
		//Adiciona ao usu�rio se deseja adicionar outra nota
		cout << "Deseja adicionar outra nota? (S/N)";
		cin >> adicionarOutraNota;
		
	} while (adicionarOutraNota == 'S' || adicionarOutraNota == 's');
	
		
	//calcula as m�dias das notas
	double soma =0.0;
	
	for (double n : notas)
	{
		soma += n;
	}
	media = soma / notas.size ();	
	
	//exibe a m�dia das notas no console
	cout << "a media das notas do aluno e : " <<media << endl;
	
	//retorna 0 para indicar que o programa foi executado com sucesso
	return 0;
}
