#include<stdio.h>

void insert(int arr[] , int *num , int pos , int item) {

    for(int i=*num-1; i >= pos-1; i--) {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = item;

    (*num)++;
    printf("Item inserted successfully!\n");
}

int main() {

    int num , pos , item;

    printf("enter a number : ");
    scanf("%d" , &num);

    int arr[num];

    printf("enter array elements : \n");
    for(int i=0; i<num; i++) {
        scanf("%d" ,&arr[i]);
    }

    printf("Array before insertion : ");
    for(int i=0 ; i<num; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("enter position to insert(1 to %d) : ", num+1);
    scanf("%d", &pos);

    printf("enter item to insert\n : ");
    scanf("%d", &item);

    if(pos < 1 || pos > num + 1) {
        printf("Invalid position\n");
    }

    else {
        insert(arr , &num , pos , item);
    }

    printf("Array after insertion : ");
    for(int i=0 ; i<num; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}