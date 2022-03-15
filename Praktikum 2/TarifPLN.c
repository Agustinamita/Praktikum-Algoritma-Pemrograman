/* Nama File : TarifPLN.c */
/* Deskripsi : Menghitung besarnya tarif listrik yang dikenakan*/
/* Nama : Agustina Mita Amalia*/
/* NIM : 24060121130058*/

#include <stdio.h>

int main()
{
    /*Kamus*/
    int x, y, z;

    /*Algoritma*/
    printf("Tarif PLN\n");
    printf("Masukkan golongan tarif dan daya listrik :");
    scanf("%d, %d", &x, &y);

    if (x == 1){
        if (y <= 100){
            z = 100 * 1000;
            printf("%d", z);
        }else if (y > 100 && y < 1000){
            z = y * 1000 ;
            printf("%d", z);
        }else if (y >= 1000){
            z = (y * 1000) + (0.1 *(y * 1000));
            printf("%d", z);
        }
    }else if(x == 2){
        if (y <= 100){
            z = 100 * 2000;
            printf("%d", z);
        }else if (y > 100 && y < 1000){
            z = y * 2000;
            printf("%d", z);
        }else if (y >= 1000){
            z = (y * 2000) + (0.1 * (y * 2000));
            printf("%d", z);
        }
    }
    return 0;
}
