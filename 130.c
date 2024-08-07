#include <stdio.h>
#include <stdlib.h>
/* Kendisi haric pozitif tam bölenlerinin toplamı kendisine eşit olan sayılara mükemmel sayı denir.girilen sayının mükemmel olup olmadığını fonk ile belirleyen program*/
int mukemmel(int n)
{
    int i = 1;
    int toplam = 0;
    while (i < n)
    {
       if (n % i == 0)
       {
           toplam = toplam +i;
       }
       i++;
    }
    if (toplam == n)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int sayi;
    int sonuc;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d", &sayi);
    sonuc = mukemmel(sayi);
    
    if (sonuc == 1)
        printf ("Bu sayi mukemmel sayidir.\n");
    else
        printf("Bu sayi mukemmel sayi degildir.\n");
   return 0;
