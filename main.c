#include "node.h"
#include "driver.h"



void menu() {
    printf("\n--------------------\n");
    printf("1. Add new data to beginning\n");
    printf("2. Add new data to end\n");
    printf("3. Delete data\n");
    printf("4. Print list\n");
    printf("5. Search for data\n");
    printf("6. Sort data\n");
    printf("7. Reverse list\n");
    printf("8. Delete list\n");
    printf("0. Exit\n");
    printf("--------------------\n");
}

int main () {

    node *head = malloc(sizeof(node));
    head = NULL;

    int choice = -1;
    do {
        menu();
        printf(ANSI_COLOR_YELLOW    "Enter your choice: "   ANSI_COLOR_RESET);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addDataStart(&head);
                break;
            case 2:
                addDataEnd(&head);
                break;
            case 3:
                deleteData(&head);
                break;
            case 4:
                printList(head);
                break;
            case 5:
                searchData(head);
                break;
            case 6:
                sortList(&head);
                break;
            case 7:
                reverseList(&head);
                break;
            case 8:
                deleteList(&head);
                break;
            case 0:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 0);
    return 0;

}