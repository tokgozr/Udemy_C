#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
//Dairenin alanı ve çevresi
void hesapla(float yariCap)
{
    float alan, cevre;
    alan = PI * yariCap * yariCap;
    cevre = 2 * PI * yariCap;
    printf("Dairenin alani = %.4f\n", alan);
    printf("Dairenin cevresi = %.4f\n", cevre);
}
int main()
{
 float yaricap;
 printf("Lutfen yaricap degerini giriniz.\n");
 scanf("%f", &yaricap);
 hesapla(yaricap);
   return 0;
}
