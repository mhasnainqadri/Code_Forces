#include<stdio.h>
int main()
{
    int x=0,ops;
    scanf("%d",&ops);
    if(ops>=1&&ops<=150)
    {
        char arr[ops][3];
        for(int i=0;i<ops;i++)
            arr[i][1]=0;
        for(int i=0;i<ops;i++)
        {
            scanf("%s",arr[i]);
            if(arr[i][1]=='+')
                x++;
            else
                x--;
        }
        printf("%d",x);
    }
}