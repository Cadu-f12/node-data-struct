# Implementação Manual de Lista Encadeada Simples (Singly Linked List)

Este é um projeto simples em C desenvolvido para praticar o conceito de estruturas de nós de encadeamento único (*single node structures*). O objetivo principal é consolidar o entendimento sobre ponteiros, alocação dinâmica de memória (`malloc` e `free`) e manipulação de nós sem o uso de abstrações de alto nível.

---

## 📌 O que é uma Lista Encadeada Simples?

Uma lista encadeada simples é uma estrutura de dados linear onde cada elemento (chamado de **Nó** ou **Node**) contém duas partes:
1. **Dados:** O valor real armazenado no nó.
2. **Próximo (Next):** Um ponteiro que aponta para o próximo nó da sequência. O último nó aponta para `NULL`, indicando o fim da lista.

![Demonstração de uma Lista Encadeada Simples](https://media.geeksforgeeks.org/wp-content/uploads/20240509162327/Singly-Linked-List-(1).webp)

---

## 🛠️ Estrutura de Código Base

A estrutura clássica de um nó utilizada neste projeto:

```c
typedef struct Node {
    int data;           // Dado armazenado (pode ser alterado para outro tipo)
    struct Node* next;  // Ponteiro para o próximo nó
} Node;
