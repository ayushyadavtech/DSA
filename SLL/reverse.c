#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *new = NULL;

    struct node *prev = NULL;
    struct node *curr = NULL;
    struct node *next = NULL;

    int num;

    printf("Enter number of nodes : ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Invalid number of node!\n");
        return 0;
    }

    for(int i=1; i<=num; i++) {

        new = (struct node *)malloc(sizeof(struct node));

        if(new == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter data for node %d : ", i);
        scanf("%d", &new->data);
        new->next = NULL;

        if(head == NULL) {
            head = new;
            temp = new;
        }

        else {
            temp->next = new;
            temp = new;
        }
    }

    prev = NULL;
    curr = head;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    temp = head;

    printf("Reversed Linked List : \n");
    while(temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL) {
        next = temp->next;
        free(temp);
        temp = next;

    }

    return 0;
}