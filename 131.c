#include <stdio.h>
#include <stdlib.h>
// iki tam sayıdan büyük olanı fonk ile bulan program
int enbuyuk(int a, int b)
{
    if (a > b)
        return a;
    else if (b > a)
        return b;
    else
        printf("girdiginiz 2 sayi birbirine esittir.\n");
}
int main()
{
    int sayi1, sayi2;
    printf("Lutfen 2 tam sayi giriniz.\n");
    scanf("%d%d", &sayi1,&sayi2);
    printf("Bu sayilarin en buyugu : %d", enbuyuk(sayi1 , sayi2));
   return 0;
}
