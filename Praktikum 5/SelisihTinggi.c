/*Nama file : SelisihTinggi.c*/
/*Nama : Agustina Mita Amalia*/
/*NIM : 24060121130058*/
/*Desjripsi : Menghitung selisih ketinggian terbesar*/
/*Lab : Alpro B1*/

int main(){

/*Kamus*/
    int array[10];
    int i,a,b;
    int X;
    int Vmax,Vmin;
    int selisih;

/*Algoritma*/
    printf("Selisih Tinggi Gunung dan Lembah\n");
    printf("Banyak data: ");
    scanf("%d",&X);
    for(i=0;i<=X-1;i++){
        printf("Masukkan lintasan ke-%d: ",i);
        scanf("%d",&array[i]);

        Vmax = array[0];
        for(a=0;a<=X-1;a++){
            if(a>=Vmax){
                Vmax = array[a];
            }
        }
        Vmin = array[0];
        for(b=0;b<=X-1;b++){
            if(b<=Vmin){
                Vmin = array[b];
            }
        }
    }
    selisih = Vmax-Vmin;
    printf("Tinggi lintasan maksimal = %d\n",Vmax);
    printf("Tinggi lintasan minimal = %d\n",Vmin);
    printf("Selisih tinggi lintasan = %d",selisih);
    return 0;
}

