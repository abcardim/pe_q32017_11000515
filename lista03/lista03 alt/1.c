/* lista 3 exercicio 1
 * Receba uma string e conte o numero de vogais dentro dela.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 27/10/2017
 */

#include <stdio.h>
#include <stdlib.h>

int ehvogal (char * entrada)
{
    if (*entrada=='A' || *entrada=='a') return 1;
    if (*entrada=='E' || *entrada=='e') return 1;
    if (*entrada=='I' || *entrada=='i') return 1;
    if (*entrada=='O' || *entrada=='o') return 1;
    if (*entrada=='U' || *entrada=='u') return 1;
    return 0;
}

int n_vogais (char * entrada)
{
    int i=0, n=0;

    while (entrada[i]!='\0') {
        if (ehvogal(&entrada[i])) n++;
        i++;
    }

    return n;

}

int main ( ) 
{

    int i=0;
    char entrada[255];

    fgets(entrada, 255, stdin);

    printf("%d\n", n_vogais(entrada));

    return 0;
  
}