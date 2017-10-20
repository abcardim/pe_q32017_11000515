#include <stdio.h>

int length(char s[])
{
    int length_TR(s[], 0);
}

int length_TR(char s[], int n)
{
    if (s[n]='\0') return n;
    return length_TR(s[], n++);
}

int main(){
    char s[5];
    s[0] = 'O';
    s[1] = 'l';
    s[2] = 'a';
    s[3] = '!';
    
    printf("%d", length_TR(s[], 4);
}

PROFESSOR

int length(char s[])
{
    int n=0;
    while(s[n]) n++; //poderia ser while (s[n++]) (feio)
    return n;
}

/*Ob