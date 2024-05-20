#include "linkedlist.h"
#include "node.h"

bool createNodeStart(node **head, int data) {
    node *newNode = malloc(sizeof(node));
    if (newNode == NULL) {
        return false;
    }
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    return true;
}

bool createNodeEnd(node **head, int data) {
    node *newNode = malloc(sizeof(node));
    if (newNode == NULL) {
        return false;
    }
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return true;
    }
    node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return true;
}

bool deleteNode(node **head, int data) {
    node *current = *head;
    node *previous = NULL;
    while (current != NULL) {
        if (current->data == data) {
            if (previous == NULL) {
                *head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            return true;
        }
        previous = current;
        current = current->next;
    }
    return false;
}

bool elementExists(node *head, int data) {
    node *current = head;
    while (current != NULL) {
        if (current->data == data) {
            return true;
        }
        current = current->next;
    }
    return false;
}

bool isEmpty(node *head) {
    return head == NULL;
}

bool deleteEverything(node **head) {
    node *current = *head;
    node *next = NULL;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
    return true;
}

bool sort(node **head) {
    node *current = *head;
    node *next = NULL;
    int temp;
    while (current != NULL) {
        next = current->next;
        while (next != NULL) {
            if (current->data > next->data) {
                temp = current->data;
                current->data = next->data;
                next->data = temp;
            }
            next = next->next;
        }
        current = current->next;
    }
    return true;
}

bool reverse(node **head) {
    node *previous = NULL;
    node *current = *head;
    node *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *head = previous;
    return true;
}

bool search(node *head, int data) {
    node *current = head;
    int index = 0;
    while (current != NULL) {
        if (current->data == data) {
            printf("Found data at index %d\n", index);
            return true;
        }
        current = current->next;
        index++;
    }
    return false;
}