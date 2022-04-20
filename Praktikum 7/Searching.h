/*Nama file : searching.h*/
/*Nama : Agustina Mita Amalia*/
/*NIM : 24060121130058*/

#include <stdlib.h>
#include <stdio.h>

void SEQSearchX1(int arr[], int N, int *IX, int X){

/*Kamus lokal*/
    int i;

/*Algoritma*/
    i = 0;
    while(i < N && arr[i]!=X){
        i++;
    }
    if(arr[i]== X){
        *IX = i;
    }else{
        *IX = -1;
    }
return 0;
}
