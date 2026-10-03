#include<stdio.h>

void trav(int arr[] , int num) {

    printf("Array elements are : \n");
    for(int i=0 ; i<num; i++) {
        printf("%d\t", arr[i]);
    }


}


int main() {

    int num;

    printf("enter a number : ");
    scanf("%d" , &num);

    int arr[num];

    printf("enter array elements : \n");
    for(int i = 0; i< num; i++) {
        scanf("%d" , &arr[i]);
    }

    trav(arr , num);
}