#include<stdio.h>
int main()
{
    int weight;
    scanf("%d",&weight);
    if(weight>=1&&weight<=100)
    {
        if(weight%2==0&&weight>=4)
        printf("Yes");
    else
        printf("No");
    }
    return 0;
}