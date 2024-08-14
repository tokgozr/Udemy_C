#include <stdio.h>
#include <stdlib.h>
// bir harften kac tane basildigini gosteren program
int main()
{
    char c;
    int sayma[26]={0};
    int can,karakter,i;
    karakter=0;
    printf("Lutfen bir text girin ve entera basin\n");
    while((c=getchar())!= '\n')
    {
        can=c-'a';
        if(can >= 0 && can < 26)
            sayma[can]++;
        else
            karakter++;
    }
    printf("\nGirdiginiz text %d karakter iceriyor : \n",karakter);
    for(i=0;i<26;i++)
    {
        printf("%d kez %c \n", sayma[i],'a' + i);
    }
    return 0;
}
