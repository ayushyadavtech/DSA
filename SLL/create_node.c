#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *new;

    new = (struct node*)malloc(sizeof(struct node));

    printf("enter data : ");
    scanf("%d", &new->data);

    new->next = NULL;

    printf("Data : %d\n", new->data);
    printf("Next : %p\n", (void*)new->next);

    free(new);

    return 0;
}