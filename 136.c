#include <stdio.h>
#include <stdlib.h>
// rastgele üretilen n elemanlı dizinin mx ve min değerleri
int enbuyuk(int A[], int elemanSayisi)
{
   int i, enb;
   enb = A[0];
   for(i = 1; i < elemanSayisi; i++)
   {
       if(A[i] > enb)
       {
           enb = A[i];
       }

   }
   return enb;
}

int enkucuk(int A[], int elemanSayisi)
{   int i, enk;
    enk = A[0];
    for (i = 1; i < elemanSayisi; i++)
    {
        if (A[i] < enk)
        {
            enk = A[i];
        }
    }
    return enk;

}

int main()
{
  int n, i;
  printf("Kac tane sayi uretilecek?\n"),
  scanf("%d",&n);
  int dizi[n];
  srand(time(0));
  printf("Dizi elemanlari\n");
  for (i = 0; i < n; i++)
  {
      dizi[i] = rand()%100;
      printf("%d\n",dizi[i]);
  }
  printf("\nEn Buyuk = %d\n", enbuyuk(dizi, n));
  printf("\nEn Kucuk = %d\n", enkucuk(dizi, n));
   return 0;
}
