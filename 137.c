#include <stdio.h>
#include <stdlib.h>
// rastgele üretilen n elemanlı dizi olsun dizide istenilen değerin sıra numarası girilerek değerin silinmesini sağla
void kayitsil(int A[], int sira, int elemanSayisi)
{
    int i;
    if(sira >= elemanSayisi +1)
    {
        printf("Lutfen gecerli bir sira numarası giriniz.\n");
    }
    else
    {
        for (i = sira -1; i <elemanSayisi-1; i++)
        {
            A[i] = A[i+1];
        }
        printf("Kayit silindikten sonraki durum:\n");
        for (i =0; i< elemanSayisi-1; i++)
        {
            printf("%d\n",A[i]);
        }
    }
}

int main()
{
    int n, i, siraNo;
    printf("Kac adet sayi uretilecek?\n");
    scanf("%d",&n);
    printf("Uretilen sayilar:\n");
    int dizi[n];
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        dizi[i] = rand()%100;
        printf("%d\n", dizi[i]);
    }
    printf("\nSilinecek degerin sira dumarasini giriniz.\n");
    scanf("%d", &siraNo);
    kayitsil(dizi, siraNo, n);

   return 0;
}
