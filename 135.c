#include <stdio.h>
#include <stdlib.h>
// floyd üçgeni
void floyd(int n)
{
   int i = 1;
   int j = 1;
   int a = 1;
   while (i <= n)
   {
       j = 1;
       while(j <= i)
       {
           printf("%3d", a);
           a++;
           j++;
       }
       printf("\n");
       i++;
   }
}
int main()
{
   int satir;
   printf("Floyd ucgeni icin satir sayisi giriniz.\n");
   scanf("%d", &satir);
   printf("\n");
   floyd(satir);
   return 0;
}
