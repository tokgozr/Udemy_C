#include <stdio.h>
#include <stdlib.h>
// dizinin elemanlarına yeni eleman eklemek
void ekle(int A[], int sira, int deger, int elemansayisi)
{
    int i;
    if(sira <= elemansayisi+1)
    {
        for(i=elemansayisi-1;i>=sira-1;i--)
        {
            A[i+1]= A[i];
        }
        A[sira-1]=deger;
        printf("Dizinin yeni hali:\n");
        for (i=0;i<=elemansayisi;i++)// yeni eleman eklendiği için
        {
            printf("%d\n",A[i]);
        }
    }
     else
    {
        printf("Gecerli bir sira numarası giriniz!\n");
    }
}
int main()
{
   int n,i,sira,deger;
   printf("Kac adet sayi uretilecek?\n");
   scanf("%d",&n);
   int dizi[n];
   srand(time(0));
   printf("Dizinin elemanlari: \n");
   for(i=0;i<n;i++)
   {
       dizi[i]=rand()%100;
       printf("%d\n", dizi[i]);
   }

   printf("Hangi siraya eleman eklenilecek?\n");
   scanf("%d",&sira);
   printf("Eklenilecek sayi nedir?\n");
   scanf("%d",&deger);
   ekle(dizi,sira,deger,n);
    return 0;
}
