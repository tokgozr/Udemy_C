#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

void init_tablo(int can[A][B])
{
   int i,j;
   printf("%d  *  %d boyutunda bir matris giriniz\n",A,B);
   for(i=0;i<A;i++)
   {
       for(j=0;j<B;j++)
       {
           scanf("%d",&can[i][j]);
       }
   }
}
void print_tablo(int can[A][B])
{
    int i,j;
    printf("Tablomuz su sekilde gorunmektedir\n");
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            printf("%4d",can[i][j]);
        }
        printf("\n");

    }
}
void calcul (int can[A][B],int *max,int *min,int * toplam)

{
    int i,j;
    *max=can[0][0];
    *min=can[0][0];
    *toplam=0;
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(can[i][j]>*max)
            {
                *max=can[i][j];
            }
            if(can[i][j]<*min)
            {
                *min=can[i][j];
            }
            *toplam=*toplam+can[i][j];
        }
    }

}
int main()
{
    int min,max,toplam;
    int can[A][B];
    init_tablo(can);
    print_tablo(can);
    calcul(can,&max,&min,&toplam);
    printf("Maximum degerimiz : %d\n",max);
    printf("Minumum degerimiz : %d\n",min);
    printf("Toplam degerimiz : %d",toplam);
    return 0;
}
