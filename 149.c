#include <stdio.h>
#include <stdlib.h>
void ucgenm(int n)
{
   int i,j;
   int boslukSayisi = n-1;
   for(i=1;i<=n;i++)
   {
       for (j=1;j<=boslukSayisi;j++)
       {
           printf(" ");
       }
        boslukSayisi--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("m");
        }
        printf("\n");
   }
}

void ucgenplus(int n)
{
   int boslukSayisi = 1;
   int i,j;
   for(i=1;i<=n;i++)
   {
      for (j=1;j<=boslukSayisi;j++)
      {
          printf(" ");
      }
      boslukSayisi++;
      for (j=1;j<= 2*(n-i)-1;j++)
      {
          printf("+");
      }
      printf("\n");
   }
}
int main()
{
    int satir;
    printf("Lutfen satir sayisi giriniz.\n");
    scanf("%d", &satir);
    ucgenm(satir);
    ucgenplus(satir);
    return 0;
}
