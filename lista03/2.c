/*  
*   Receba uma string (por 'fgets') e retorne-a invertida.
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

void print_invertido ( char * s, int l)
{
    while (l>=0){
        printf("%c", *(s+l));
        l--;
    }
    printf("\n");
}

int main() {
    char entrada[255];
    /*
    ---OPCAO 1----- (Parece que considera o Enter)
    fgets(entrada, 255, stdin);
 
    ---OPCAO 2-----
    scanf("%s", entrada);
    */
    fgets(entrada, 255, stdin);
 
    print_invertido(entrada, len(entrada));
    
    return 0;
}