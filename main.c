float realizar_saque(float saldo) {
float valor_saque;
printf("Valor do saque: ");
scanf("%f", &valor_saque);
if(valor_saque >10000){
print("Limite diário excedido\n");        
} else if(valor_saque <= saldo && valor_saque > 0) {
saldo  -= valor_saque;
printf("saque realizado! \n");
} else {
print ("saldo insuficiente ou valor invalido! \n");
}

return saldo;
}

