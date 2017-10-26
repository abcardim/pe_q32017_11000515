#include <stdio.h>
#include <unistd.h>

int main()
{
    unsigned char c = 0;
    
    while (c != 255)
    {
        printf("%d - %c , ", c,c++);
        usleep(1000000);
    }
}