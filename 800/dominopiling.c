#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int product=a*b;
    if(product%2!=0)
        product--;
    printf("%d",product/2);
    return 0;
}