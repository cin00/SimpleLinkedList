#ifndef NODE_H
#define NODE_H

struct nodeElement {
    struct nodeElement *next;
    int data;
};

typedef struct nodeElement node;

#endif