#include <stdio.h>
#include <stdlib.h>

void majuscules(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>= 'A' && str[i] <= 'Z')
        str[i] = str[i] - 'A' + 'a' ;
    else if (str[i] >= 'a' && str[i] <= 'z')
        str[i]=str[i]- 'a' +'A';
    }
    return(str);
}



int main(void)
{
    char str[100];
    char i;
    printf("Entrez une chaine à convertir en majuscules :");
    gets(str);
    majuscules(str);

    printf("Voicie votre chaine convertie : %s \n",str);

return 0;
}
