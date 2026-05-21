#include <stdlib.h>
#include <stdio.h>

#include "node.h"

typedef struct Node_ {
    int data;
    struct Node_* next;
} Node;

Node* create_node(int value) {
    Node* node = malloc(sizeof(Node));
    if (!node) {
        printf("ERROR: NODE NOT CREATED");
        return node;
    }
    node->data = value;
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

int get_data(Node* node) {
    if (!node) {
        printf("ERROR: NODE IS NULL");
        return 0;
    }
    
    return node->data;
}

int set_data(Node* node, int value) {
    if (!node) {
        printf("ERROR: NODE IS NULL");
        return 0;
    }

    node->data = value;
    return 1;
}