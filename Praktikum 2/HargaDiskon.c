/*Nama File : HargaDiskon.c */
/* Deskripsi : Menghitung besarnya harga setelah diberikan diskon*/
/* Nama : Agustina Mita Amalia*/
/* NIM : 24060121130058*/

#include <stdio.h>

int main()
{
    /*Kamus*/
    int x, z;   //200 < x < 10000
    char y ;    //A, B, C

    /*Algoritma*/
    printf("Harga Diskon \n");
    printf("Masukkan harga dan jenis:");
    scanf("%d,%c",&x,&y);

    if(x > 200 && x < 10000 && y =='A'){
        z = x - (x*10/100);
        printf("%d", z);
    }else if(x > 200 && x < 10000 && y =='B'){
        z = x - (x*15/100);
        printf("%d", z);
    }else if(x > 200 && x < 10000 && y =='C'){
        z = x - (x*20/100);
        printf("%d", z);
    }
    return 0;
}
