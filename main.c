#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limpar_cmd();
void exibir_menu();
void opcoes(int opcao, float saldo);
void consultar_saldo(float saldo);
int limite_diario(float saldo);
int saque_aprovado(float valor_saque, float saldo);
int eh_positivo(float saldo);
float realizar_saque(float saldo);
float realizar_deposito(float saldo);
void sair_programa();

int main() {
    int opcao;
    float saldo;
    exibir_menu();
    printf("Digite a opcao: ", opcao);
    scanf("%d", &opcao);
    opcoes(opcao, saldo);
    return 0;
}

void limpar_cmd() {
    if (_WIN32) {
        system("cls");
    } else {
        system("clear");
    }
}

float realizar_saque(float saldo) {
    float valor_saque;
    printf("Valor do saque: ");
    scanf("%f", &valor_saque);
    if (limite_diario(valor_saque)) {
        printf("Limite diário excedido\n");        
    } else if (saque_aprovado(valor_saque, saldo)) {
        saldo  -= valor_saque;
        printf("saque realizado! \n");
    } else {
        printf("saldo insuficiente ou valor invalido! \n");
    }
    return saldo;
}

int limite_diario(float valor_saque){
    return valor_saque >10000;
}

int saque_aprovado(float valor_saque, float saldo){
    return valor_saque <= saldo && valor_saque > 0;
}

int eh_positivo(float saldo) {
    return saldo > 0;
}

void exibir_menu() {
    printf(" ----------  Bem vindo ao Nunbank  :)  -------- \n");
    printf("Menu de opcoes:\n");
    printf("=====================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("=======================\n");
}

void consultar_saldo(float saldo) {
    printf("\n--- SALDO ATUAL ---\n");
    printf("R$ %.2f\n", saldo);
    printf("-------------------\n");
}

void opcoes(int opcao, float saldo) {
    limpar_cmd();
    switch (opcao)
    {
    case 0:
        sair_programa();
        break;
    case 1:
        consultar_saldo(saldo);
        exibir_menu();
        printf("Digite a opcao: ", opcao);
        scanf("%d", &opcao);
        opcoes(opcao, saldo);
        break;
    case 2:
        saldo = realizar_saque(saldo);
        exibir_menu();
        printf("Digite a opcao: ", opcao);
        scanf("%d", &opcao);
        opcoes(opcao, saldo);
        break;
    case 3:
        saldo = realizar_deposito(saldo);
        exibir_menu();
        printf("Digite a opcao: ", opcao);
        scanf("%d", &opcao);
        opcoes(opcao, saldo);
    default:
        break;
    }
}

float realizar_deposito(float saldo) {
    float valor;
    printf("Digite o valor depositado: ");
    scanf("%f", &valor);
    if (eh_positivo(valor)) {
        saldo += valor;
        printf("Deposito realizado!\n");
    } else {
        printf("Valor invalido\n");
    }
    return saldo;
}

void sair_programa() {
    printf("Programa Encerrado");
}