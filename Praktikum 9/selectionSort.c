/*Nama File : insertionSort.c*/
/*Deskripsi : Mengurutkan data dengan cara mencari nilai terendah atau tertinggi dalam suatu array*/
/*Nama 		: Agustina Mita Amalia */
/*NIM 		: 24060121130058*/

#include <stdio.h>
#include "arrFunction.c"

void selectionSort(int arr[], int n){
    /*Kamus lokal*/
    int i, j, min;

    /*Algoritma*/
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            min = i;
            if (arr[j] < arr[min]){
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

int main(){
    /*Kamus*/
    int arr[]={5,9,0,3,2,17,89,100,15,90,62,35,11};
    int n;

    /*Algoritma*/
    n = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
