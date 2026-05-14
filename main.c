#include <stdio.h>
#include <string.h>

void limpar_cmd();
int digitar_opcao();
void opcoes(int opcao);
float consultar_saldo(float saldo);
float realizar_saque(float saldo);
float realizar_deposito(float saldo);
void sair_programa();

int main() {
    float saldo;
    return 0;
}

float realizar_deposito(float saldo) {
    printf("Digite o valor do depósito  ");
    return saldo;
}

void opcoes(int opcao, float saldo) {
    switch (opcao)
    {
    case 0:
        // Sair do programa
        break;
    case 1:
        // Consultar saldo
        consultar_saldo(saldo);
        break;
    case 2:
        // Realizar saque
        saldo = realizar_saque(saldo);
        break;
    case 3:
        // Realizar Depósito
        saldo = realizar_deposito(saldo);
    default:
        break;
    }
}
