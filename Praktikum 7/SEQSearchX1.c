/*Nama file : SEQSearchX1.c*/
/*Deskripsi : Mencari harga X dalam tabel T[1..N] secara sekuensial*/
/*Nama : Agustina Mita Amalia*/
/*NIM : 24060121130058*/

#include "Searching.h"
#include <stdlib.h>

int main()
{
   /*Kamus*/
   int T[]= {2,3,6,3,65,21,1,9,11,15,89};
   int x = 89;
   int n = sizeof(T)/sizeof(T[0]);
   int ix;

   /*Algoritma*/
   SEQSearchX1(T, n , &ix, x);
   (ix == -1)
        ? printf("Elemen tidak ditemukan, sehingga IX = 0")
        : printf("Elemen ditemukan pada indeks IX = %d",ix);

    return 0;
}





