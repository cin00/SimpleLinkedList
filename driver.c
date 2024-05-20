#include "linkedlist.h"
#include "driver.h"
#include "node.h"


void addDataStart(node **head) {
    printf("Enter new data: ");
    int data = -1;
    scanf("%d", &data);
    bool success = createNodeStart(head, data);
    if(success) {
        printf(ANSI_COLOR_GREEN "Data added successfully!"  ANSI_COLOR_RESET"\n");
    } else {
        printf(ANSI_COLOR_RED   "Failed to add data!" ANSI_COLOR_RESET"\n");
    }
}

void addDataEnd(node **head) {
    printf("Enter new data: ");
    int data = -1;
    scanf("%d", &data);
    bool success = createNodeEnd(head, data);
    if(success) {
        printf(ANSI_COLOR_GREEN "Data added successfully!"  ANSI_COLOR_RESET"\n");
    } else {
        printf(ANSI_COLOR_RED   "Failed to add data!" ANSI_COLOR_RESET"\n");
    }
}

void deleteData(node **head) {
    printf("Enter data to delete: ");
    int data = -1;
    scanf("%d", &data);
    bool success = deleteNode(head, data);
    if(success) {
        printf(ANSI_COLOR_GREEN "Data deleted successfully!"  ANSI_COLOR_RESET"\n");
    } else {
        printf(ANSI_COLOR_RED   "Failed to delete data!" ANSI_COLOR_RESET"\n");
    }
}

void printList(node *head) {
    node *current = head;
    while (current != NULL) {
        printf("[%d] -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void searchData(node *head) {
    if(isEmpty(head)) {
        printf(ANSI_COLOR_RED "List is empty!"  ANSI_COLOR_RESET"\n");
        return;
    }
    else if(head->next == NULL) {
        printf(ANSI_COLOR_RED "List has only one element, no need to sort!"  ANSI_COLOR_RESET"\n");
        return;
    }
    else {
        printf("Enter data to search: ");
        int data = -1;
        scanf("%d", &data);
        bool success = search(head, data);
        if(success) {
            printf(ANSI_COLOR_GREEN "Data found!"  ANSI_COLOR_RESET"\n");
        } else {
            printf(ANSI_COLOR_RED   "Data not found!" ANSI_COLOR_RESET"\n");
        }
    }
}

void deleteList(node **head) {
    if(isEmpty(*head)) {
        printf(ANSI_COLOR_RED "List is empty!"  ANSI_COLOR_RESET"\n");
        return;
    }
    else {
        bool success = deleteEverything(head);
        if(success) {
            printf(ANSI_COLOR_GREEN "List deleted successfully!"  ANSI_COLOR_RESET"\n");
        } else {
            printf(ANSI_COLOR_RED   "Failed to delete list!" ANSI_COLOR_RESET"\n");
        }
    }
}

void sortList(node **head) {
    bool success = sort(head);
    if(success) {
        printf(ANSI_COLOR_GREEN "List sorted successfully!"  ANSI_COLOR_RESET"\n");
    } else {
        printf(ANSI_COLOR_RED   "Failed to sort list!" ANSI_COLOR_RESET"\n");
    }
}

void reverseList(node **head) {
    bool success = reverse(head);
    if(success) {
        printf(ANSI_COLOR_GREEN "List reversed successfully!"  ANSI_COLOR_RESET"\n");
    } else {
        printf(ANSI_COLOR_RED   "Failed to reverse list!" ANSI_COLOR_RESET"\n");
    }
}