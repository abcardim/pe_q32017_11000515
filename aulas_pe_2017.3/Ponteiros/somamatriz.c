#include<stdio.h>

void scan_m(int m, int n, int b[m][n])
{
    int i, j;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
        scanf("%d",(*(b+i)+j));
        }
    }
}

void main()
{
    int a[5][5]={0},b[5][5]={0},c[5][5]={0},i,j,m,n;
    
    printf("Enter m & n:");
    
    scanf("%d %d",&m,&n);
    printf("Enter 1 matrix:");
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++) {
            scanf("%d",(*(a+i)+j));
        }
    }
    
    printf("\nEnter 2 matrix:");
    scan_m(m,n,b);
    
    printf("\nAddition Matrix:\n");
    for(i=0;i<m;i++)
        { for(j=0;j<n;j++){
        *(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
        printf("%d ",*(*(c+i)+j));
    }
    printf("\n");
    
            
    }
}

