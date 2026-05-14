# Nunbank - Sistema Bancário em C

## Integrantes

| Nome | RM |
|------|----|
| Bernardo Zauza Amorim | 568808 |
| Bruno Almeida | 572648 |
| Gabriel Góes Nunes Pereira | 571735 |
| Guilherme Vinciguerra Carvalho | 571951 |
| Marcos Peterson | 573857 |
| Matheus Jorge Santana | 574166 |

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
* 9abdd29 - Matheus Santana: docs: atualizando a ordem dos nomes dos integrantes do grupo (10 seconds ago)
* 15e2178 - github-actions[bot]: docs: atualizar histórico de commits [skip ci] (5 minutes ago)
* efea953 - mathsant-js: Merge branch 'main' of https://github.com/mathsant-js/1SEM_CP3_1CCPI (5 minutes ago)
* b0f0aff - mathsant-js: fix: ajustando as variáveis de ambiente para automatizar o histórico de commits (5 minutes ago)
* 7119293 - github-actions[bot]: docs: atualizado histórico de commits no README [skip ci] (9 minutes ago)
* 6d09c6c - mathsant-js: fix: usando dependências do próprio GitHub para realizar a automação (9 minutes ago)
* 9899fd0 - mathsant-js: docs & feat: adicionando função para exibição do histórico de commits automaticamente (12 minutes ago)
* a7667b3 - bezauza02: Add files via upload (19 minutes ago)
* 0ead4c1 - bezauza02: Delete README.md (23 minutes ago)
* f459dd8 - bezauza02: Add files via upload (24 minutes ago)
* c06effb - mathsant-js: style: ajeitando a ordem das funções e organizando o código (57 minutes ago)
* 8570bfd - mathsant-js: chore: adicionando .gitignore para não subir arquivos inúteis (61 minutes ago)
* 101d572 - mathsant-js: fix: removendo biblioteca desnecessária (62 minutes ago)
* 912f5ce - mathsant-js: feat: adicionando função condicional para avaliar valor digitado para o depósito na conta (64 minutes ago)
* f9af806 - mathsant-js: feat: função condicional para aprovação do saque foi adicionada (70 minutes ago)
* eda3437 - mathsant-js: feat & fix: adicionando funções para limpar o cmd, sair do programa e programa não encerra após escolher uma opção (74 minutes ago)
* cb8bd4c - mathsant-js: fix: ajeitando funções incorretas (89 minutes ago)
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
