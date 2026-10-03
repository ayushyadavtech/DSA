#include<stdio.h>

void merge(int arr1[] , int arr2[] , int arr3[] , int num1 , int num2) {

    int i = 0, j=0 , k=0;

    while(i < num1 && j < num2) {

        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i < num1) {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j < num2) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

int main() {

    int num1 ,num2;


    printf("enter number of first array : ");
    scanf("%d" , &num1);

    printf("enter number of second array : ");
    scanf("%d", &num2);

    int arr1[num1];
    int arr2[num2];
    int arr3[num1+num2];

    printf("enter first array elements : \n");
    for(int i=0; i<num1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter second array elements : \n");
    for(int j=0; j<num2; j++) {
        scanf("%d", &arr2[j]);
    }

    merge(arr1, arr2 , arr3 , num1 , num2);

    printf("Array after merging : ");
    for(int i=0; i<num1+num2; i++) {
        printf("%d\t", arr3[i]);
    }




    return 0;
}