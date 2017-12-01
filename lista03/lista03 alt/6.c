/* lista 3 exercicio 6
 * Receba um valor inteiro n representando o tamanho do vetor e, em seguida, um vetor
 * de inteiros com esse tamanho. Imprima a mediana dos valores desse vetor com duas casas
 * decimais.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 02/11/2017
 */

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b) 
{
    return (*(int*)a - *(int*)b);
}

double mediana(int *n, int *vetor)
{
    double med;
    int index;

    if (*n%2) {
        index = (*n+1)/2;
        med = vetor[index-1];
    } else {
        index = *n/2;
        med = (vetor[index-1] + vetor[index])/2.0;
    }

    return med;
}

int main () {

    int n, i, *vetor;

    scanf("%d", &n);

    vetor = malloc(sizeof(int)*n);

    for (i=0; i<n; i++) {
        scanf("%d", vetor+i);
    }

    qsort(vetor, n, sizeof(int), cmpfunc);

    printf("%.2lf ", mediana(&n, vetor));
    printf("\n");

    free(vetor);

    return 0;
}