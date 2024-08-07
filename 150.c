#include <stdio.h>
#include <stdlib.h>
//seri toplaminin hesaplanmasi 1 ^ 2+ 2 ^ 2 +3 ^ 2...
int seriToplami(int N)
{
    int i;
    int toplam = 0;
    for (i = 1; i <= N; i++)
    {
        toplam = toplam + (pow(i,2));
    }
    return toplam;
}
int main()
{
    int n;
    printf("n degerini giriniz.\n");
    scanf("%d", &n);
    printf("Serinin toplami = %d\n", seriToplami(n));
    return 0;
}
