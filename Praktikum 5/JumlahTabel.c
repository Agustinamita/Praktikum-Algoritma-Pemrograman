/*Nama file : JumlahTabel.c*/
/*Nama : Agustina Mita Amalia*/
/*NIM : 24060121130058*/
/*Desjripsi : Menghitung jumlah sub array*/
/*Lab : Alpro B1*/

int main(){

/*Kamus*/
    int array[10];
    int i,j;
    int X;
    int sum,jumlah;

/*Algoritma*/
    printf("Jumlah Tabel\n");
    printf("Banyak data: ");
    scanf("%d",&X);
    jumlah = 0;
    for(i=1;i<=X;i++){
        printf("Masukkan tabel ke-%d: ",i);
        scanf("%d",&array[i]);
        for(j=1;j<=i;j++){
           jumlah = jumlah + array[i];
           sum = jumlah + array[j-i];
        }
    }
    printf("Jumlah sub array = %d",sum);
    return 0;
}
