#include <stdio.h>

int main()
{
    int a[3][3], transposta[3][3], r=3, c=3, i, j;

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            scanf("%d", &a[i][j]);
        }

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transposta[j][i] = a[i][j];
        }
        
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transposta[i][j]);
            if(j==r-1)
                printf("\n");
        }

    return 0;
}