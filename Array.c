#include<stdio.h>
#define MAX 100

int n;
void traverse(int arr[]);

void insert(int arr[] , int pos , int item);

void delete(int arr[] , int pos);


int main() {

    // int arr[MAX];

    // printf("enter number of elements : ");
    // scanf("%d", &n);

    // printf("enter %d elements : \n", n);
    // for(int i=0; i<n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // traverse(arr);


    // int arr[MAX] , pos , item;

    // printf("enter number of elements : ");
    // scanf("%d" , &n);

    // printf("enter %d elements : \n", n);
    // for(int i=0; i<n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // printf("enter position to insert (1 to %d): ", n+1);
    // scanf("%d" , &pos);

    // printf("enter item to insert : ");
    // scanf("%d", &item);

    // if(pos < 1 || pos > n+1) {
    //     printf("invalid position!\n");
    // }

    // else {
    //     insert(arr , pos , item);
    // }

    // printf("Array after insertion\n");
    // for(int i=0; i<n; i++) {
    //     printf("%d\t", arr[i]);
    // }



    int arr[MAX] , pos;

    printf("enter number of elements : ");
    scanf("%d", &n);

    printf("enter %d elements : \n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter position to delete (1 to %d) : ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("invalid position!\n");
    }

    else {
        delete(arr , pos);
    }

    printf("Array after deletion\n");
    for(int i=0 ; i<n; i++) {
        printf("%d\t", arr[i]);
    }




    return 0;
}

void traverse(int arr[]) {
    printf("Array elements are : ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

void insert(int arr[] , int pos , int item) {
    for(int i=n-1; i>=pos-1; i--) {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = item;
    n++;

    printf("Item inserted successfully.\n");
}

void delete(int arr[] , int pos) {
    for(int i = pos-1; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Item deleted successfully.\n");
}