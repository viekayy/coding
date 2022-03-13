#include<stdio.h>
int main()
{
    int num,i;
    printf("enter num");
    scanf("%d",&num);
    printf("table is %d,num\n");
    for( i = 0; i<11; i++)
    {
        printf("%dx%d = %d , vinni khota hai, lolx \n", num,i ,num*i);
    }
    return 0;

}