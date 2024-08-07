#include <stdio.h>
#include <stdlib.h>
// taban ve üs değeri girilen a^b şeklindeki işlem fonk ile
int ushesapla(int a, int b)
{
    int i;
    int sonuc = 1;
    for (i = 1; i <= b; i++)
        sonuc = a * sonuc;

    return sonuc;
}
int main()
{
    int taban, us;
    printf("Lutfen taban degerini giriniz.\n");
    scanf("%d",&taban);
    printf("Lutfen us degerini giriniz.\n");
    scanf("%d", &us);
    printf("islem sonucu = %d", ushesapla(taban, us));
  return 0;
}
