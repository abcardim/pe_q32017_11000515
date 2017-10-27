/* 
*   Crie uma função que recebe ponteiro 
*   para a posição inicial de um vetor e
*   imprima todos os elementos do vetor
*   utilizando aritmética de ponteiros
*
*   Autor: André B. Cardim
*   Data: 26/10/2017
*/

#include <stdio.h>

void print_vetor(char * s)
{
    //for ( s ; *s ; s++) printf("%c", *s);
    //for ( ; *s ; s++) printf("%c", *s);
    while (*s){
        printf("%c", *s);
        s++;
    }
    printf("\n");
}

int main(){
    char s[25];
    
    scanf("%s", s); //Esse passo já coloca 0 no fim da string!
    print_vetor( s );
    
    return 0;
}