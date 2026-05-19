typedef struct Node_ Node;

Node* create_node(int info);
Node* get_next(Node* node);
int set_next(Node* node, Node* node_next);
int get_info(Node* node);
int set_info(Node* node, int value);
