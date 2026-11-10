#include <stdlib.h>
#include <stdio.h>


int str_len(char *str)
{
    int i = 0; 


    while (str[i] != '\0')
    {
        i = i + 1; 
    }

    return i; 
}


int main()
{
    char * str = "Hello World!";

    int resultat = str_len(str);
    printf("Longueur : %d\n", resultat); 

    return 0;
}