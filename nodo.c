#include <stdlib.h>
#include <stdio.h>

#include "nodo.h"

typedef struct Node_ {
    int info;
    struct Node_* next;
} Node;

Node* create_node(int value) {
    Node* node = malloc(sizeof(Node));
    if (!node) {
        printf("ERROR: NODE NOT CREATED");
        return node;
    }
    node->info = value;
    node->next = NULL;
    return node;
}

Node* get_next(Node* node) {
    if (!node) {
       printf("ERROR: NODE IS NULL");
       return node; 
    }

    return node->next;
}

int set_next(Node* node, Node* node_next) {
    if (!node || !node_next) {
        printf("ERROR: NODE IS NULL");
        return 0;
    }
    
    node->next = node_next;
    return 1;
}

int get_info(Node* node) {
    if (!node) {
        printf("ERROR: NODE IS NULL");
        return 0;
    }
    
    return node->info;
}

int set_info(Node* node, int value) {
    if (!node) {
        printf("ERROR: NODE IS NULL");
        return 0;
    }

    node->info = value;
    return 1;
}