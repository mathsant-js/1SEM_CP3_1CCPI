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

## Histórico de Commits
<!--START_SECTION:commit_history-->
* efea953 - mathsant-js: Merge branch 'main' of https://github.com/mathsant-js/1SEM_CP3_1CCPI (12 seconds ago)
* b0f0aff - mathsant-js: fix: ajustando as variáveis de ambiente para automatizar o histórico de commits (14 seconds ago)
* 7119293 - github-actions[bot]: docs: atualizado histórico de commits no README [skip ci] (4 minutes ago)
* 6d09c6c - mathsant-js: fix: usando dependências do próprio GitHub para realizar a automação (4 minutes ago)
* 9899fd0 - mathsant-js: docs & feat: adicionando função para exibição do histórico de commits automaticamente (7 minutes ago)
* a7667b3 - bezauza02: Add files via upload (14 minutes ago)
* 0ead4c1 - bezauza02: Delete README.md (18 minutes ago)
* f459dd8 - bezauza02: Add files via upload (19 minutes ago)
* c06effb - mathsant-js: style: ajeitando a ordem das funções e organizando o código (52 minutes ago)
* 8570bfd - mathsant-js: chore: adicionando .gitignore para não subir arquivos inúteis (56 minutes ago)
* 101d572 - mathsant-js: fix: removendo biblioteca desnecessária (57 minutes ago)
* 912f5ce - mathsant-js: feat: adicionando função condicional para avaliar valor digitado para o depósito na conta (59 minutes ago)
* f9af806 - mathsant-js: feat: função condicional para aprovação do saque foi adicionada (65 minutes ago)
* eda3437 - mathsant-js: feat & fix: adicionando funções para limpar o cmd, sair do programa e programa não encerra após escolher uma opção (69 minutes ago)
* cb8bd4c - mathsant-js: fix: ajeitando funções incorretas (84 minutes ago)
* 783720d - mathsant-js: Merge branch 'main' of https://github.com/mathsant-js/1SEM_CP3_1CCPI (2 hours ago)
* 3eeb958 - mathsant-js: feat: função de realizar depósito foi adicionada (2 hours ago)
* 5214f0f - marcospeterson: Merge branch 'main' of https://github.com/mathsant-js/1SEM_CP3_1CCPI (2 hours ago)
* 9b7d46b - marcospeterson: refactor: extrai regras de saque para funções (2 hours ago)
* 1094c32 - gabrielgoes08dev: feat: codigo do menu ralizado (2 hours ago)
* ecf633b - marcospeterson: Merge branch 'main' of https://github.com/mathsant-js/1SEM_CP3_1CCPI (2 hours ago)
* 4f882b9 - marcospeterson: feat: função realizar saque (2 hours ago)
* 0d0e140 - mathsant-js: Merge branch 'main' of https://github.com/mathsant-js/1SEM_CP3_1CCPI (2 hours ago)
* 458811a - mathsant-js: chore: estrutura do switch adicionda (2 hours ago)
* edfda25 - bezauza02: feat: função de consultar saldo adicionada (2 hours ago)
* a6fe649 - mathsant-js: first commit (3 hours ago)
<!--END_SECTION:commit_history-->