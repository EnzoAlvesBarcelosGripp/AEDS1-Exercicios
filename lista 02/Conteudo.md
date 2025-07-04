# Resumo de Comandos Básicos em C

## 1. Variáveis e Tipos de Dados

### 1.1. Conceitos Fundamentais
* **Dado:** Toda e qualquer tipo de informação que um programa manipula.
* **Tipo de Dado:** É a representação computacional da informação, definindo como ela será armazenada e interpretada. Os tipos básicos mais utilizados podem ser numéricos, lógicos, literais ou caracteres.
* **Variável:** Um local de armazenamento reservado na memória RAM (volátil) em tempo de execução. Está associada a um tipo e a um nome. A variável é desalocada da memória quando o programa termina.

### 1.2. Regras para Nomes de Variáveis
O nome da variável é escolhido pelo desenvolvedor e deve seguir algumas regras:
* Deve ser diferente de palavras reservadas.
* Não pode conter símbolos, com exceção do underscore (`_`).
* Deve começar com uma letra ou com o underscore (`_`).
* Não podem existir nomes repetidos em um mesmo escopo.
* A linguagem diferencia letras minúsculas e maiúsculas (case sensitive).
* Não podem ser acentuados ou utilizar o cedilha 'ç'.
* Sugere-se o uso do padrão CamelCase, começando com letra minúscula.

### 1.3. Declaração e Atribuição
* **Declaração:** É o comando que "cria" a variável, reservando seu espaço na memória e associando um nome e um tipo a ela.
* **Atribuição:** Armazena um dado na variável, substituindo qualquer conteúdo anterior.

#### Formato e Exemplos
* **Formato de declaração:** `<tipo> <nomeEscolhido> = dadoInicial;` (a inicialização é opcional).
* **Exemplos:**
    * `int quantidade, portas = 4, idade;` 
    * `double velocidade = 5.0;` 
    * `float aceleracao = 2.0;` 

### 1.4. Tipos de Dados em C

| Tipo | Bits | Bytes | Escala (Intervalo com sinal) |
|---|---|---|---|
| `char` | 8  | 1  | -128 a 127 |
| `short` | 16  | 2  | -32.765 a 32.767  |
| `int` | 32  | 4  | -2.147.483.648 a 2.147.483.647  |
| `long` | 32  | 4  | -2.147.483.648 a 2.147.483.647  |
| `float` | 32  | 4  | 3.4 \times 10^{-38} a 3.4 \times 10^{38} (aproximado)  |
| `double` | 64  | 8  | $1.7 \times 10^{-308}$ a $1.7 \times 10^{308}$ (aproximado) |
| `long double`| 80  | 10  | $3.4 \times 10^{-4932}$ a $3.4 \times 10^{4932}$  |

* **Tipo `bool`:** Não é um tipo nativo da linguagem C. É necessário incluir a biblioteca `stdbool.h` para utilizá-lo.

### 1.5. Constantes
* Uma constante é uma informação que, uma vez armazenada, não pode ser alterada posteriormente. 
* Pode ser definida em C usando `#define` ou `const`.
* **Exemplos:**
    * `#define VELOCIDADE 5.0`.
    * `const double VELOCIDADE = 5.0;`. 

### 1.6. Conversão de Tipos
* **Conversão implícita:** Ocorre automaticamente quando um tipo é atribuído a uma variável de um tipo que o engloba.
* **Conversão explícita (casting):** Usada quando existe o risco de perder informação na conversão.
    * **Exemplo:** `int quantidade = (int) velocidade; // casting`.

## 2. Tabela ASCII
* ASCII (American Standard Code for Information Interchange) é um padrão para a codificação de caracteres: 
* Cada caractere é representado por um código numérico: 
* Exemplos de códigos:
    * 'A' corresponde ao número 65.
    * 'a' corresponde ao número 97.
    * '0' corresponde ao número 48. 
* É possível manipular caracteres somando ou subtraindo valores de seus códigos ASCII, como no exemplo da Cifra de César. 

## 3. Entrada e Saída no Console

### 3.1. Saída Formatada com `printf()`
* A função `printf()` da biblioteca `stdio.h` é utilizada para escrever informações na saída padrão (a tela).
* Ela escreve o conteúdo a partir da posição atual do curso. 
* O formato geral permite integrar variáveis em um texto usando especificadores:  `printf("....%?...%?.....", var1, var2,...);`. 

#### Especificadores de Formato
| Especificador | Tipo |
|---|---|
| `%d` | int   |
| `%.xf` | float (x indica o número de casas decimais)  |
| `%.xlf` | double (x indica o número de casas decimais)   |
| `%c` | char   |
| `%s` | char[ (string)   |
| `%p` | Ponteiro (endereço)  |
| `%%` | Imprime o caractere `%`   |

#### Caracteres Especiais
Dentro de uma string, a `\` pode ser usada para criar caracteres com funções especiais
* `\n`: Nova linha 
* `\t`: Tabulação 
* `\\`: Exibe a barra `\`
* `\"`: Exibe aspas `"`

### 3.2. Entrada com `scanf()`
* A função `scanf()` da biblioteca `stdio.h` lê dados da entrada padrão (o teclado): 181, 182.
* Seu formato geral é: `scanf("%? %? %?", &var1, &var2, &var3);`: 184.

## 4. Operadores e Expressões

### 4.1. Operadores Matemáticos
| Operador | Descrição | Exemplo |
|---|---|---|
| `+` | Soma : 206 | `2+3`  |
| `-` | Subtração : 209 | `7-8`  |
| `*` | Multiplicação : 213 | `2*6`  |
| `/` | Divisão : 217 | `3.0/2` (resultado 1.5)  |
| `%` | Resto da divisão : 222 | `3%2` (resultado 1)  |
| `++` | Incremento : 223 | `x++` (equivale a `x=x+1`)  |
| `--` | Decremento : 219 | `y--` (equivale a `y=y-1`)  |

* **Operadores de Atribuição:** `+=`, `-=`, `*=`, `/=`, `%=`: 203. `x += y` equivale a `x = x + y`.

### 4.2. Operadores Relacionais e Lógicos
| Categoria | Operador | Descrição |
|---|---|---|
| Relacional | `==` | Igualdade |
| Relacional | `!=` | Diferença  |
| Relacional | `<` | Menor  |
| Relacional | `<=` | Menor ou igual  |
| Relacional | `>` | Maior  |
| Relacional | `>=` | Maior ou igual  |
| Lógico | `!` | Negação (NOT)  |
| Lógico | `&&` | E lógico (AND)  |
| Lógico | `||` | Ou lógico (OR)  |

## 5. Funções Matemáticas (`math.h`)
* Para usar funções matemáticas, é necessário incluir a biblioteca `math.h`.
* O resultado da maioria dessas funções é do tipo `double`.

| Função | Descrição |
|---|---|
| `floor()` | Arredonda para baixo |
| `ceil()` | Arredonda para cima  |
| `sqrt()` | Calcula raiz quadrada  |
| `pow(base, expoente)` | Potenciação  |
| `sin()` | Seno  |
| `cos()` | Cosseno  |
| `tan()` | Tangente |
| `log()` | Logaritmo natural  |
| `log10()` | Logaritmo base 10 |

### 5.1. Geração de Números Aleatórios
* A geração de números aleatórios utiliza funções das bibliotecas `<stdlib.h>` e `<time.h>`.
* Usa-se a hora do sistema como base para a geração.
* **Comandos:**
    * `srand((unsigned) time(NULL));` // Inicializa o gerador de números.
    * `rand();` // Sorteia um número.
