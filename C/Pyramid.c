#include <stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        printf(" ");
        for(int j=0; j<=i;j++)
        printf("* ");
        printf("\n");
    }
    getch();
}