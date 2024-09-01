#include <iostream>

using namespace std;

float Soma(float y, float x) {
    return y + x;
}

float Subtracao(float y, float x) {
    return y - x;
}

float Divisao(float y, float x) {
    if (x != 0) {
        return y / x;
    } else {
        cout << "Erro: Divisão por zero!" << endl;
        return 0;
    }
}

float Multiplicacao(float y, float x) {
    return y * x;
}

void calculadora() {
    int op;
    float y, x;
    char continuar;
    
    do {
        cout << "Calculadora\n";
        cout << "Escolha uma operacao:\n";
        cout << "1. Soma\n";
        cout << "2. Subtracao\n";
        cout << "3. Multiplicacao\n";
        cout << "4. Divisao\n";
        cout << "0. Sair\n";  // Adicionando opção para sair
        cout << "Opcao: ";
        cin >> op;
        
        if (op == 0) {
            cout << "Saindo da calculadora." << endl;
            break;  // Sai do loop se o usuário escolher a opção 0
        }
        
        if (op < 1 || op > 4) {
            cout << "Opcao invalida, tente novamente.\n";
            continue;  // Volta ao início do loop se a opção for inválida
        }

        cout << "Digite o primeiro numero: ";
        cin >> y;
        cout << "Digite o segundo numero: ";
        cin >> x;

        float resultado;
        switch (op) {
            case 1:
                resultado = Soma(y, x);
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado = Subtracao(y, x);
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = Multiplicacao(y, x);
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                resultado = Divisao(y, x);
                // Divisão já trata o caso de divisão por zero
                cout << "Resultado: " << resultado << endl;
                break;
        }

        cout << "Deseja realizar outra operacao? (s/n): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
}

int main() {
    calculadora();
    return 0;
}
