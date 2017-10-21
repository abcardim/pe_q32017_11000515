//teste string com char
#include <stdio.h>

char s[500][3];

int main(){
    int i;
    char a='A', b = 'B';
    
    
    s[0]='a';
    s[1]='n';
    s[3][1]="alo";
    
    for (i=0; i<1000; i++)
    {   
        if (s[i]) printf(" %c", s[i]);
    }
    printf("\n");
}