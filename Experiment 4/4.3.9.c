/*Experiment 4: Loops
4.3:Write seperate programs for each patterns.
9.*/

#include <stdio.h>
int main()
{
    printf("Name - Daksh Bhargava\nSAP ID - 590028335\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int i,j,s;

    for(i=1;i<=5;i++)
    {
        for(s=5;s>i;s--)
        {
            printf("  ");
        }
        for(j=5;j>=6-i;j--)
        {
            printf("%d ",j);
        }
        for(j=7-i;j<=5;j++)
        {
            if(j!=6-i)
            printf("%d ",j);
        }
        printf("\n");
    }

    for(i=4;i>=1;i--)
    {
        for(s=5;s>i;s--)
        {
            printf("  ");
        }
        for(j=5;j>=6-i;j--)
        {
            printf("%d ",j);
        }
        for(j=7-i;j<=5;j++)
        {
            if(j!=6-i)
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}
