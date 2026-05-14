float realizar_saque(float saldo) {
float valor_saque;
printf("Valor do saque: ");
scanf("%f", &valor_saque);
if(limite_diario(valor_saque)){
print("Limite diário excedido\n");        
} else if( saque_aprovado(valor_saque, saldo)) {
saldo  -= valor_saque;
printf("saque realizado! \n");
} else {
print ("saldo insuficiente ou valor invalido! \n");
}
return saldo;
}

int limite_diario(float valor_saque){
    return valor_saque >10000;
}
int saque_aprovado(float valor_saque, float saldo){
    return valor_saque <= saldo && valor_saque > 0;
}


void exibirMenu() {
printf(" ----------  Bem vindo ao Nunbank  :)  -------- \n");
printf("Menu de opcoes:\n");
printf("=====================\n");
printf("1 - Consultar Saldo\n");
printf("2 - Realizar Saque\n");
printf("3 - Realizar Deposito\n");
printf("0 - Sair\n");
printf("=======================\n");

}

void consultarSaldo(float saldo) {
    printf("\n--- SALDO ATUAL ---\n");
    printf("R$ %.2f\n", saldo);
    printf("-------------------\n");
    system("pause");
}
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
