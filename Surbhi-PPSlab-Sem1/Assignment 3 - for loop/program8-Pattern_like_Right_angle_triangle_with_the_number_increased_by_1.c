#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k=1;
    for (i=1; i<=4; i++)
    {
        for (j=1; j<=4; j++)
        {
            if(i>=j)
            {
                printf("%d",k);
                k++;
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");       
    }
}