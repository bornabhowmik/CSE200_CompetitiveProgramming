#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d", &i);

    while(i--)
    {
        scanf("%d",&n);

        if(n%2==0 && n%7==0)
        {
            printf("Alice\n");
        }

        else if(n%2!=0 && n%9==0)
        {
            printf("Bob\n");
        }

        else
        {
            printf("charlie\n");
        }
    }

    return 0;

}





