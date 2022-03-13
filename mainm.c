#include<stdio.h>
int main()
{
    int num,i;
    printf("enter");
    scanf("%d",&num);
    printf("table is %d,num\n");
    for(i=0 ; i<11 ; i++)
    {
        printf("%dx%d = %d",num,i,num*i);
        }

        return 0