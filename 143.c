#include <stdio.h>
#include <stdlib.h>
// Bolme Islemi
void bolmeIslemi(int bolunen, int bolen)
{
    int kalan, bolum;
    kalan = bolunen % bolen;
    bolum = bolunen / bolen;
    printf("Kalan = %d Bolum = %d", kalan, bolum);
}
int main()
{
    int bolunen, bolen;
    printf("Lutfen bolunen sayiyi giriniz.\n");
    scanf("%d",&bolunen);
    printf("Lutfen bolen sayiyi giriniz.\n");
    scanf("%d",&bolen);
    bolmeIslemi(bolunen, bolen);

 return 0;
}
