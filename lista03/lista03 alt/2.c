/* lista 3 exercicio 2
 * Receba uma string e retorne-a invertida.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 27/10/2017
 */

#include <stdio.h>
#include <stdlib.h>

int len (char * s)
{
    int n = 0;
  
    while (s[n]!='\0' && s[n]!='\n') n++;

    return n;
  
}

char * inverte (char * entrada)
{
    int i, l;
    char * inverso;

    l = len(entrada);
    inverso = malloc(sizeof(char)*(l+1));

    for (i=l;i>=0;i--) {
        inverso[l-i] = entrada[i-1];
    }

    inverso[l+1]='\0';

    return inverso;

}

int main ( ) 
{

    int i=0;
    char entrada[255];

    fgets(entrada, 255, stdin);

    printf("%s\n", inverte(entrada));

    return 0;
  
}