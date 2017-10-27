/*
*  Crie uma função que recebe um ponteiro
*  para a posição inicial de uma matriz e
*  imprima todos os elementos da matriz 
*   utilizando aritmética de ponteiros.
*
*   Autor: André B. Cardim
*   Data: 26/10/2017
*/

#include <stdio.h>

void print_m(int x[5][5])
{
    int i, j;
    for(i=0; i<5 ; i++){
        printf("\n");
        for(j=0;j<5;j++){
            printf("%d ", x[i][j]/* *(*(x+i)+j) */ );
        }
    }
}

void print_endereco(int **x)
{
    printf(" ");
}

int main(){
    int x[5][5] = {
    { 5, 0, 3, 2, 1},
    { 5, 0, 3, 2, 1},
    { 5, 0, 3, 2, 1},
    { 5, 0, 3, 2, 1},
    { 5, 0, 3, 2, 1} };
    int **y;
    y  = x;
    
    //int (*p)[5] = x;
    //printf("%d\n", p);
    
   //int (*p)[5];
   // p = x;
   print_m(x);
   print_endereco(y);
   
   
   return 0;
}
