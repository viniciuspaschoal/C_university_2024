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

        // Solicita ao usuário que digite um número inteiro positivo
        cout << "Digite um número inteiro positivo: ";
        cin >> numero;

        if (numero <= 0) {
            cout << "O número digitado não é válido." << endl;
            continue; // Pula para a próxima iteração do loop
        }

        // Adiciona o número ao vetor
        numeros.push_back(numero);

        // Exibe a decomposição do número
        system("cls");
        cout << "A decomposição de " << numero << " é: ";
        int resultado = 1; // Inicializa o resultado como 1
        for (int i = numero; i > 0; --i) {
            cout << i;
            if (i != 1) {
                cout << " x ";
                resultado *= i; // Multiplica o resultado pelo número atual
            }
        }
        cout << endl;

        // Exibe o resultado da multiplicação
        cout << "O resultado da multiplicação é: " << resultado << endl;
        cout << '\n';

        // Pergunta ao usuário se deseja adicionar outro número
        cout << "Deseja adicionar outro número? (S/N): ";
        cin >> adicionar_outro;
        system("cls");

    } while (adicionar_outro == 'S' || adicionar_outro == 's');
    
    cout << "O programa foi finalizado!" << endl;

    return 0;
}

