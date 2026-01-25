#include<stdio.h>
#include<stdbool.h>

// Function Declaration
bool solution(int weight);

// Main Function
int main()
{
    int weight;
    scanf("%d",&weight);
    printf("%s",(solution(weight))?"YES":"NO");
    return 0;
}

// Function Definition
bool solution(int weight)
{
    if(weight%2==0&&weight>2)
        return true;
    return false;
}