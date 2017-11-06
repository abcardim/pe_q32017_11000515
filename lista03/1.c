/*  
*   Receba uma string e conte 
*   o numero de vogais dentro dela.
*
*   Data: 04/11/2017
*   Autor: André B. Cardim
*/

#include <stdio.h>

int cont_vogais(char * ps)
{
    int v=0;
    while ( *ps ){  //igual a ( *ps != '\0')
        if (*ps=='a' ||
            *ps=='e' ||
            *ps=='i' ||
            *ps=='o' ||
            *ps=='u') v++;
            
        ps++;
    }
    
    return v;
}


int main() {
    char entrada[255];
    fgets(entrada, 255, stdin);
    
    printf("%u\n", cont_vogais(entrada));
    
    return 0;
}