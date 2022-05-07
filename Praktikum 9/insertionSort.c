/*Nama File : insertionSort.c*/
/*Deskripsi : Mengurutkan data dengan cara membandingkan dua data pertama pada suatu array*/
/*Nama 		: Agustina Mita Amalia */
/*NIM 		: 24060121130058*/


#include <stdio.h>
#include "arrFunction.c"

void insertionSort(int arr[], int n){
    /*Kamus lokal*/
    int i, j, key;

    /*Algoritma*/
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    /*Kamus lokal*/
    int arr[]={5,9,0,3,2,17,89,100,15,90,62,35,11};
    int n;

    /*Algoritma*/
    n = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
