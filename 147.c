#include <stdio.h>
#include <stdlib.h>
//saniye olarak girilen değerin saat dakika saniye şeklinde gösterimi
void saniyeyecevir(int saniye)
{
    int sa, dk, sn, artikzaman, zaman;
    sa = saniye / 3600;
    zaman = saniye % 3600;
    dk = zaman / 60;
    sn = zaman % 60;
    printf("%d:%d:%d", sa, dk, sn);
}
int main()
{
    int saniye;
    printf("Lutfen saniye degerini giriniz.\n");
    scanf("%d", &saniye);
    saniyeyecevir(saniye);

    return 0;
}
