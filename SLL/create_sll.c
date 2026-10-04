#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *head = NULL;
    struct node *new = NULL;
    struct node *temp = NULL;

    int num;

    printf("enter number of nodes : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {

        new = (struct node *)malloc(sizeof(struct node));

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

    printf("\nSingly Linked List : \n");

    temp = head;

    while(temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}