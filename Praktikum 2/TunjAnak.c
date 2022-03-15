/*Nama File : TunjAnak.c */
/* Deskripsi : Menghitung besarnya tunjangan anak yang diberikan berdasarkan gaji pokok*/
/* Nama : Agustina Mita Amalia*/
/* NIM : 24060121130058*/

#include <stdio.h>

int main()
{
    /*Kamus*/
    int a, b, c;

    /*Algoritma*/
    printf("Tunjangan Anak\n");
    printf("Masukkan jumlah anak dan gaji pokok :");
    scanf("%d, %d", &a, &b);

    if(a < 3){
        c = a * ((0.1)* b);
        printf("%d", c);
    }else if(a >= 3){
        c = 3 * ((0.1)* b);
        printf("%d", c);
    }
    return 0;
}
