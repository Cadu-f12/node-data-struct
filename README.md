# Implementação de Single Node

Este projeto consiste na implementação técnica da unidade fundamental de estruturas dinâmicas: o **Nó (Node)**. Desenvolvido em C (com arquivos `.c` e `.h`), o foco aqui é a manipulação atômica dessa estrutura, explorando a fundo a alocação dinâmica de memória e o uso de ponteiros para referenciamento.

## 📌 O que é um Single Node?

Diferente de uma lista encadeada completa, um **Single Node** é a unidade básica (o "átomo") que compõe diversas estruturas de dados. Ele serve como um recipiente que armazena uma informação e possui a capacidade de se conectar a outro elemento, embora, neste projeto, o foco seja a sua criação, inicialização e destruição de forma isolada e segura.

Um nó é composto por:
1.  **Dados (Data):** O conteúdo útil armazenado (neste caso, um inteiro).
2.  **Ponteiro (Next):** O "braço" da estrutura, um ponteiro que permite a conexão futura com outros nós.

![Demonstração de uma estrutura de Nó](https://miro.medium.com/v2/resize:fit:1400/1*7bz9P5GAvWcMcHBfQeNlpQ.jpeg)

## 🛠️ Especificações Técnicas

A implementação foca na robustez da gestão de memória, garantindo que cada nó seja devidamente alocado no *Heap* e liberado após o uso, evitando *memory leaks* (vazamentos de memória).

### Estrutura do Nó (Header `.h`)

```c
typedef struct Node {
    int data;           // Valor armazenado
    struct Node* next;  // Ponteiro para o próximo elemento (ou NULL)
} Node;
```

## 🚀 Como utilizar

Como o projeto está modularizado, você pode incluir o header em seu código principal:

1. Inclua o header: Adicione ``#include "node.h"`` no seu arquivo principal.

2. Compile o código: Certifique-se de compilar o arquivo fonte do nó junto com o seu main.c:

```Bash
gcc <seu_programa_aqui> node.o -o main
```

3. Instancie os nós: Utilize as funções de criação para instanciar novos nós em tempo de execução.

4. Gestão de Memória: Lembre-se sempre de liberar a memória de cada nó individualmente após o uso para manter o programa eficiente.