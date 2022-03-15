/* Nama File : BiayaParkir.c */
/* Deskripsi : Menghitung besarnya biaya parkir berdasarkan lama waktu parkir*/
/* Nama : Agustina Mita Amalia*/
/* NIM : 24060121130058*/


#include <stdio.h>

int main()
{
    /*Kamus*/
    int waktu, biaya;

    /*Algoritma*/
    printf("Biaya Parkir \n");
    printf("Masukkan waktu :");
    scanf("%d", &waktu);

    if (waktu==1 || waktu==2){
        biaya = 2000;
        printf("%d", biaya);
    } else if (waktu > 2){
        biaya = 2000+((waktu-2)*500);
        printf("%d", biaya);
    }
    return 0;
}
