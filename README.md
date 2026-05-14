# Nunbank - Sistema Bancário em C

## Integrantes

| Nome | RM |
|------|----|
| Guilherme Vinciguerra Carvalho | 571951 |
| Matheus Jorge Santana | 574166 |
| Bernardo Zauza Amorim | 568808 |
| Gabriel Góes Nunes Pereira | 571735 |
| Marcos Peterson | 573857 |

## Descrição do Sistema

O Nunbank é um sistema bancário simples desenvolvido em linguagem C. Ele simula operações básicas de uma conta bancária por meio de um menu interativo no terminal, permitindo que o usuário consulte saldo, realize saques e depósitos.

## Funcionalidades Implementadas

- **Consultar Saldo**: exibe o saldo atual da conta formatado em reais (R$).
- **Realizar Saque**: permite ao usuário sacar um valor, com validações de limite diário (máximo R$ 10.000,00) e saldo disponível.
- **Realizar Depósito**: permite depositar valores positivos na conta.
- **Sair**: encerra o programa com uma mensagem de finalização.
- **Limpeza de tela**: compatível com Windows (`cls`) e sistemas Unix/Linux (`clear`).

## Instruções de Compilação e Execução

### Pré-requisitos

- Compilador GCC instalado (Linux/macOS) ou MinGW (Windows).

### Compilação

```bash
gcc -o nunbank main.c
```

### Execução

**Linux/macOS:**
```bash
./nunbank
```

**Windows:**
```bash
nunbank.exe
```

### Exemplo de uso

Ao iniciar o programa, será exibido o menu:

```
---------- Bem vindo ao Nunbank :) --------- 
Menu de opcoes:
------------------------
1 - Consultar Saldo
2 - Realizar Saque
3 - Realizar Deposito
0 - Sair
------------------------
Digite a opcao: 
```

Basta digitar o número da opção desejada e pressionar Enter.
