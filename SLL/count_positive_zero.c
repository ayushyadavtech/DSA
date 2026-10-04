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

    int num;
    int positive = 0 , zero = 0;

    printf("enter number of nodes : ");
    scanf("%d",&num);

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

    temp = head;

    while(temp != NULL) {

        if(temp->data > 0) {
            positive++;
        }

        else if(temp->data == 0) {
            zero++;
        }

        temp = temp->next;
    }

    printf("Positive node = %d\n", positive);
    printf("Zero nodes = %d\n", zero);


    return 0;
}