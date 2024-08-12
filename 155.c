#include <stdio.h>
#include <stdlib.h>
// dizideki elemanların ortalaması
float ortbul(int *dizim, int boyut)
{
    int i;
    int toplam = 0;
    float sonuc;
    for(i=0;i<boyut;i++)
    {
        toplam += dizim[i];
    }
    sonuc = (float)toplam / i;
    return (float)sonuc;
}
int main()
{
    int n,i;
    float ort;
    printf("Kac adet eleman girilecek?\n");
    scanf("%d",&n);
    int dizi[n];
    for(i=0;i<n;i++)
    {
       printf("%d. sayiyi giriniz: \n",i+1);
       scanf("%d",&dizi[i]);
    }
    ort = ortbul(dizi,n);
    printf("Girdiginiz sayilarin ortalamasi = %.3f\n",ort);
    return 0;
}
