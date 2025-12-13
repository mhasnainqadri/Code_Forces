#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=1&&x<=1000000)
    {
        int steps=x/5;
        if(x%5!=0)
            steps++;
        printf("%d",steps);
    }
    return 0;
}