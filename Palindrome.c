#include <stdio.h>
#include <stdlib.h>
#define MAX 60

void read_sentence(char tab[MAX])
{
    int i = 0;
    scanf("%c", &tab[i]);

    while ((tab[i] != '\n') && i < MAX - 1)
    {
        i++;
        scanf("%c", &tab[i]);
    }
    tab[i] = '\0';
}

int length_of_array(char tab[MAX])
{
    int i;
    for (i = 0; tab[i] != '\0'; i++);
    return i;
}

void remove_space(char tab[MAX])
{
    int i;
    int j = 0;
    for (i = 0; tab[i] != '\0'; i++)
    {
        if (tab[i] != ' ')
        {
            tab[j] = tab[i];
            j++;
        }
    }
    tab[j] = '\0';
    printf("After removing the space, our array: %s\n", tab);
}

void reverse(char nor[MAX], char rev[MAX])
{
    int i;
    int j = length_of_array(nor) - 1;
    for (i = 0; nor[i] != '\0'; i++)
    {
        rev[i] = nor[j];
        j--;
    }
    rev[i] = '\0';
    printf("Inverted version of the array: %s\n", rev);
}

int palindrome(char array[MAX])
{
    int i = 0, L, test = 1;
    char temporary[MAX];
    remove_space(array);
    L = length_of_array(array);
    reverse(array, temporary);
    for (i = 0; i < L; i++)
    {
        if (temporary[i] != array[i])
        {
            test = 0;
            break;
        }
    }
    return test;
}

int main(void)
{
    char sentence[MAX];
    int a;
    printf("Please enter a word or a sentence.\n");
    read_sentence(sentence);
    a = palindrome(sentence);
    if (a == 1)
        printf("\nThis is a palindrome \n");
    else
        printf("\nThis is not a palindrome \n");
    return 0;
}
