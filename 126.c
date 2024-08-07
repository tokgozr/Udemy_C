#include <stdio.h>
#include <stdlib.h>
// faktoriyel hesabını fonk ile bulan prog.
fakt(int a)
{
   int i;
   int sonuc = 1;
   for (i = 1; i <= a; i++)
   {
       sonuc = sonuc * i;
   }
   return sonuc;
}
int main()
{
    int sayi;
    printf("Lutfen bir tam sayi giriniz\n");
    scanf("%d",&sayi);
    printf("Girdiginiz %d sayisinin faktoriyeli = %d", sayi, fakt (sayi));
    return 0;
}
