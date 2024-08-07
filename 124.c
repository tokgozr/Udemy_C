#include <stdio.h>
#include <stdlib.h>

//GİRİLEN 2 TAM SAYININ TOPLAMINI FONK İLE BULAN PROG.

int topla(int a, int b)
{
    return a + b;
}

int main()
{
    int sayi1, sayi2;
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf ("%d%d", &sayi1, &sayi2);
    printf("Sayilarin Toplami: %d", topla(sayi1, sayi2));

    return 0;
}
