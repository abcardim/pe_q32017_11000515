/* lista 3 exercicio 3
 * Receba 2 vetores do tipo int com 5 posicoes,
 * v1 e v2, retorne um vetor com a soma
 * desses dois vetores, v3[i] = v1[i] + v2[i].
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 27/10/2017
 */

#include <stdio.h>
#include <stdlib.h>

int * soma (int * v1, int * v2, int n)
{
    int i;
    int *s;

    s=malloc(sizeof(int)*n);

    for (i=0; i<n; i++) {

        s[i] = v1[i]+v2[i];

    }

    return s;

}

void print_vetor(int *vetor, int n)
{
    int i;


    for (i=0; i<n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

}

int main ( ) 
{

    int i=0, v1[5], v2[5];
    int *s;

    scanf("%d %d %d %d %d", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
    scanf("%d %d %d %d %d", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);

    s = soma(v1,v2,5);

    print_vetor(s, 5);

    free(s);
    return 0;
  
}