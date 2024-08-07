#include <stdio.h>
#include <stdlib.h>
// 4 işlemi fonk ile yapan prog.

float dortislem(float a, float b, char islem)
{

    if (islem == '+')
        return a + b;

    else if (islem == '-')
        return a - b;

    else if (islem == '*')
        return a * b;

    else if (islem == '/')
        return a / b;

    else
        printf("Gecersiz islem girdiniz.\n");
}

int main()
{
    int sayi1, sayi2;
    char islem;
    printf("Lutfen hangi islemi yapmak istediginizi giriniz.\n");
    scanf("%c", &islem);
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf("%d%d", &sayi1,&sayi2);
    printf("Islemin sonucu = %.2f", dortislem(sayi1, sayi2, islem));
    return 0;
}
