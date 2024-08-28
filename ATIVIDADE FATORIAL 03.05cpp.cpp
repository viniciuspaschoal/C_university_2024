#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    vector<int> numeros;
    char adicionar_outro;

    do {
        int numero;

        // Solicita ao usu�rio que digite um n�mero inteiro positivo
        cout << "Digite um n�mero inteiro positivo: ";
        cin >> numero;

        if (numero <= 0) {
            cout << "O n�mero digitado n�o � v�lido." << endl;
            continue; // Pula para a pr�xima itera��o do loop
        }

        // Adiciona o n�mero ao vetor
        numeros.push_back(numero);

        // Exibe a decomposi��o do n�mero
        system("cls");
        cout << "A decomposi��o de " << numero << " �: ";
        int resultado = 1; // Inicializa o resultado como 1
        for (int i = numero; i > 0; --i) {
            cout << i;
            if (i != 1) {
                cout << " x ";
                resultado *= i; // Multiplica o resultado pelo n�mero atual
            }
        }
        cout << endl;

        // Exibe o resultado da multiplica��o
        cout << "O resultado da multiplica��o �: " << resultado << endl;
        cout << '\n';

        // Pergunta ao usu�rio se deseja adicionar outro n�mero
        cout << "Deseja adicionar outro n�mero? (S/N): ";
        cin >> adicionar_outro;
        system("cls");

    } while (adicionar_outro == 'S' || adicionar_outro == 's');
    
    cout << "O programa foi finalizado!" << endl;

    return 0;
}

