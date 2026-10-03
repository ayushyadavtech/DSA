#include<stdio.h>

void delete(int arr[] , int *num , int pos) {

    for(int i=pos-1; i<*num-1; i++) {
        arr[i] = arr[i+1];
    }

    (*num)--;
    printf("Item deletion successfully!\n");
}

int main() {

    int num , pos;

    printf("enter a number : \n");
    scanf("%d" , &num);

    int arr[num];

    printf("enter array elements : \n");
    for(int i=0; i<num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array is : ");
    for(int i=0; i<num; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("enter position to delete : ");
    scanf("%d" , &pos);

    if(pos < 1 || pos > num) {
        printf("Invalid position\n");
    }

    else {
        delete(arr , &num , pos);
    }

    printf("Array after deletion : ");
    for(int i=0; i<num; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}