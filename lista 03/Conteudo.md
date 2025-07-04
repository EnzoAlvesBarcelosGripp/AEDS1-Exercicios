# Resumo de Estruturas Condicionais em C

## 1. Estrutura Sequencial
A estrutura sequencial é a forma mais básica de fluxo de controle, onde os comandos são executados na ordem em que aparecem no código. Cada comando é separado por ponto e vírgula.

* **Forma Geral**:
    ```
    <comando 1>;
    <comando 2>;
    <comando 3>;
    ...
    <comando n>;
    ```
* **Bloco de Comandos**: Um bloco é delimitado por chaves `{` e `}`. Os comandos dentro do bloco são executados sequencialmente, linha a linha. É uma boa prática usar recuo (indentação) para indicar visualmente a hierarquia dos blocos.

## 2. Estruturas Condicionais (ou de Seleção)
As estruturas condicionais permitem que a programação tome decisões. Elas possuem uma expressão condicional (ou condição) cujo resultado lógico (`true` ou `false`) controla o fluxo de execução do programa. Os tipos são: `if`, `if-else` e `if-else if`.

### 2.1. Estrutura `if` (Comando Se)
Executa um bloco de comandos somente se a condição avaliada for verdadeira. Se a condição for falsa, o bloco é ignorado e a execução continua no próximo comando após a estrutura `if`.

* **Sintaxe em C**:
    ```c
    if (expressão) {
        // lista de comandos
    }
    ```

### 2.2. Estrutura `if-else` (Comando Se-Senão)
Executa um de dois blocos de comandos. Se a condição for verdadeira, o bloco de comandos 1 é executado. Caso contrário (se a condição for falsa), o bloco de comandos 2 (dentro do `else`) é executado. Apenas um dos blocos é executado.

* **Sintaxe em C**:
    ```c
    if (expressao) {
        // lista de comandos 1
    } else {
        // lista de comandos 2
    }
    ```

### 2.3. Estrutura `if-else if`
Testa uma série de condições em sequência. Os blocos são avaliados de cima para baixo. O primeiro bloco cuja condição seja verdadeira é executado, e todos os demais são ignorados. Se nenhuma das condições for verdadeira, o bloco `else` final, se existir, será executado. O uso de `else if` e do `else` final é opcional.

* **Sintaxe em C**:
    ```c
    if (expressão 1) {
        // lista de comandos 1
    } else if (expressão 2) {
        // lista de comandos 2
    } else {
        // lista de comandos n
    }
    ```

### 2.4. Estruturas Aninhadas
É possível colocar estruturas condicionais dentro de outras, criando múltiplos níveis de verificação.

* **Cuidado com o `else` Aninhado**: Em situações de `if`s aninhados sem chaves, um comando `else` é sempre associado ao `if` mais interno. É uma ótima prática de programação sempre usar chaves `{}` para evitar ambiguidades, mesmo que o bloco contenha apenas um comando.

## 3. Operador Ternário
É uma forma enxuta de escrever um comando condicional `if-else`.

* **Sintaxe**: `(expressão) ? valor1 : valor2;`
* **Funcionamento**: Se a `expressão` for `true`, o resultado é `valor1`. Se for `false`, o resultado é `valor2`.
* **Exemplo de Conversão**:
    * **Código com `if-else`**:
        ```c
        if (a > b) {
            c = a * a;
        } else {
            c = b;
        }
        ```
    * **Mesmo código com operador ternário**:
        ```c
        c = (a > b) ? a * a : b;
        ```

## 4. Estrutura `switch` (Comando Escolhe)
A estrutura `switch` é um tipo de seleção que avalia uma expressão e compara seu resultado com uma lista de constantes (`case`).

* **Sintaxe em C**:
    ```c
    switch (valor) {
        case valor1:
            // lista de comandos 1
            break;
        case valor2:
            // lista de comandos 2
            break;
        default:
            // lista de comandos n
    }
    ```
* **Características Principais**:
    * Em C, a expressão dentro do `switch` deve resultar em um valor do tipo `char` ou `int`.
    * O comando `break` ao final de cada `case` é opcional, mas necessário para criar casos mutuamente exclusivos. Sem o `break`, a execução continua para o próximo `case` ("fall-through").
    * É possível agrupar múltiplos `case`s para executar o mesmo bloco de código.
    * A cláusula `default` é opcional e é executada se nenhum dos `case`s corresponder ao valor da expressão.
