#include "node.h"
#include "lib.h"

node* init();
bool createNodeStart(node **head, int data);
bool createNodeEnd(node **head, int data);
bool deleteNode(node **head, int data);
bool elementExists(node *head, int data);
bool isEmpty(node *head);
bool deleteEverything(node **head);
bool sort(node **head);
bool reverse(node **head);
bool search(node *head, int data);