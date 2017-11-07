/*  
*   Receba uma string e retorne-a invertida.
*
*   Data: 06/11/2017
*   Autor: André B. Cardim
*/

#include <stdio.h>

int len(char * s)
{
    int l=0;
    while ( *s!='\0' ){
        l++;
        s++;
    }
 
    return l;
}

//*char * iverte_s ( char * ps1)


/* Objetivo inicial: retornar o tamanho da string */
int main() {
    char entrada[255];
    /*
    ---OPCAO 1-----
    fgets(entrada, 255, stdin);
 
    ---OPCAO 2-----
    scanf("%s", entrada);
    */
    
    scanf("%s", entrada);
    
    printf("%d\n", len(entrada));
    
    return 0;
}