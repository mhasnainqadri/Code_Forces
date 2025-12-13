#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5],x,y,moves;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                x=i-2;
                y=j-2;
            }
        }
        moves=abs(x)+abs(y);
    }
    printf("%d",moves);
    return 0;
}