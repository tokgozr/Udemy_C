#include <stdio.h>
#include <stdlib.h>
//negatif bir değer girilene kadar kullanıcıdan sürekli sayı isteyen program
void sayiIste()
{
    int sayi;
    while(1)
    {
        printf("Lutfen bir sayi giriniz.\n");
        scanf("%d", &sayi);
        if (sayi < 0)
            break;
    }
}
int main()
{ sayiIste();
   return 0;
}
