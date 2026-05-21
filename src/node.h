typedef struct Node_ Node;

Node* create_node(int info);
Node* get_next(Node* node);
int set_next(Node* node, Node* node_next);
int get_data(Node* node);
int set_data(Node* node, int value);
