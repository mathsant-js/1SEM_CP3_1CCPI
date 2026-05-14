# 🏧 Sistema ATM - Caixa Eletrônico em C

**Disciplina:** Data Structure and Algorithms  
**Instituição:** FIAP  
**Professor:** Érick  

---

## 👥 Integrantes do Grupo

| Nome Completo | RM |
|---|---|
| (Adicione seu nome aqui) | RM XXXXX |
| (Adicione seu nome aqui) | RM XXXXX |
| (Adicione seu nome aqui) | RM XXXXX |

---

## 📋 Descrição do Sistema

Sistema simulador de Caixa Eletrônico (ATM – Automated Teller Machine) desenvolvido em linguagem C, executado via terminal/console. O sistema simula operações bancárias básicas com autenticação por senha, menus interativos, validações de segurança e registro de histórico de transações.

O projeto integra os principais conceitos estudados na disciplina:

| Conceito | Aplicação no ATM |
|---|---|
| `do-while` | Loop principal que mantém o menu ativo |
| `switch-case` | Roteamento das opções do menu |
| Funções | Cada operação bancária isolada em módulo próprio |
| `if-else` aninhado | Validações compostas de segurança |
| Vetores + `struct` | Histórico de transações da sessão |

---

## ✅ Funcionalidades Implementadas

- **Autenticação por senha** com bloqueio após 3 tentativas erradas
- **[1] Consultar Saldo** — exibe saldo, limite diário e total sacado no dia
- **[2] Realizar Saque** — com validações:
  - Valor deve ser positivo
  - Deve ser múltiplo de R$ 10,00 (notas disponíveis)
  - Não pode exceder o saldo disponível
  - Não pode exceder o limite diário de R$ 500,00
- **[3] Realizar Depósito** — com validações:
  - Valor deve ser positivo
  - Máximo de R$ 5.000,00 por operação
- **[4] Extrato Bancário** — exibe histórico das últimas 10 transações da sessão
- **[0] Sair** — encerra o sistema com mensagem de despedida

---

## 🏗️ Arquitetura e Organização do Código

```
atm/
├── atm.c       ← Código-fonte principal (arquivo único)
└── README.md   ← Documentação do projeto
```

### Estrutura interna do `atm.c`

```
Constantes e Defines
Estrutura Transacao (struct)
Variáveis globais de estado
Protótipos das funções
main() — loop do-while + switch-case
Funções auxiliares de interface
  ├── limparTela()
  ├── pausar()
  ├── exibirCabecalho()
  └── exibirMenu()
Autenticação
  └── autenticar()
Operações bancárias
  ├── consultarSaldo()
  ├── realizarSaque()
  ├── realizarDeposito()
  └── exibirExtrato()
Função interna
  └── registrarTransacao()
```

---

## ⚙️ Instruções de Compilação e Execução

### Pré-requisitos
- Compilador GCC instalado (Linux/Mac/Windows com MinGW)

### Compilação

```bash
# Linux / macOS
gcc atm.c -o atm

# Windows (MinGW)
gcc atm.c -o atm.exe
```

### Execução

```bash
# Linux / macOS
./atm

# Windows
atm.exe
```

### Senha padrão de acesso
```
1234
```

---

## 📌 Exemplo de uso

```
  ======================================
         BANCO FIAP - CAIXA ELETRONICO
  ======================================

  [1]  Consultar Saldo
  [2]  Realizar Saque
  [3]  Realizar Deposito
  [4]  Extrato (ultimas 10 operacoes)
  [0]  Sair

  --------------------------------------
  Saldo atual: R$ 1000.00
  --------------------------------------

  Sua opcao: 2
```

---

## 🧠 Conceitos Aplicados (conforme PDF do Professor)

- ✅ `do-while` → mantém o menu ativo até o usuário escolher sair
- ✅ `switch-case` → seleciona a operação correta com `default` para entradas inválidas
- ✅ Funções modulares → `exibirMenu()`, `realizarSaque()`, `realizarDeposito()`, etc.
- ✅ `if-else` aninhado → validação composta no saque (valor, limite, saldo)
- ✅ `struct` + vetor → histórico de transações com `Transacao historico[]`
- ✅ Buffer limpo → `while (getchar() != '\n')` após cada `scanf`
- ✅ Formatação monetária → `%.2f` em todas as exibições de valores
- ✅ Limpeza de tela → `system("cls")` / `system("clear")` por plataforma
- ✅ Boas práticas / Clean Code → nomes descritivos, comentários úteis, indentação consistente

---

## 📝 Histórico de Commits (referência)

> Mantenha commits descritivos ao longo do desenvolvimento:
> - `feat: adiciona estrutura base do ATM com loop do-while`
> - `feat: implementa funcao de autenticacao com bloqueio`
> - `feat: implementa consulta de saldo`
> - `feat: implementa saque com validacoes compostas`
> - `feat: implementa deposito com limite por operacao`
> - `feat: implementa extrato bancario com historico`
> - `docs: atualiza README com instrucoes de compilacao`
> - `fix: corrige limpeza de buffer apos scanf`
