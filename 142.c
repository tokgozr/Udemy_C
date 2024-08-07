#include <stdio.h>
#include <stdlib.h>
// yer degistirme
void yerDegistir(int x, int y)
{
    int gecici;
    gecici = x;
    x = y;
    y = gecici;
    printf("Islemden sonra = x : %d y : %d", x, y);
}
int main()
{
    int x, y;
    printf("Lutfen x ve y degerlerini sirasiyla giriniz.\n");
    scanf("%d%d",&x,&y);
    printf("Islemden once =  x : %d y : %d\n",x,y);
    yerDegistir(x,y);
 return 0;
