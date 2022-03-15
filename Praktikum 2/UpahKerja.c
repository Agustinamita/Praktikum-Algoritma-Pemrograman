/*Nama File : UpahKerja.c */
/* Deskripsi : Menghitung upah kerja yang diterima dengan aturan golongan*/
/* Nama : Agustina Mita Amalia*/
/* NIM : 24060121130058*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    int x, y, z;

    /*Algoritma*/
    printf("Upah Kerja \n");
    printf("Masukkan golongan dan jam kerja :");
    scanf("%d,%d", &x, &y);

    if (x == 1){
        if (y < 40){
            z = y * 1000;
            printf("%d", z);
        }else if (y >= 40){
            z = (40 * 1000) + ((y-40)*(1.5 * 1000));
            printf("%d", z);
        }
    }else if (x==2){
        if (y < 40){
            z = y * 1500;
            printf("%d", z);
        }else if (y >= 40){
            z = (40 * 1500) + ((y-40)*(1.5 * 1500));
            printf("%d", z);
        }
    }else if (x==3){
        if (y < 40){
            z = y * 2000;
            printf("%d", z);
        }else if (y >= 40){
            z = (40 * 2000) + ((y - 40)*(1.5*2000));
            printf("%d", z);
        }
    }else if (x==4){
        if (y < 40){
            z = y * 2500;
            printf("%d", z);
        }else if (y >= 40){
            z = (40 * 2500) + ((y - 40)* (1.5 * 2500));
            printf("%d", z);
        }
    }
    return 0;
}
