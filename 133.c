#include <stdio.h>
#include <stdlib.h>
// tek sayilari fonk ile listeleyen program
void teksayi(int a)
{
    int i = 0;
    while (i <= a)
    {
      if (i % 2 == 1)
        printf("%d\n",i);
    i++;
    }
}
int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d", &sayi);
    printf("\n");
    teksayi(sayi);
   return 0;
}
