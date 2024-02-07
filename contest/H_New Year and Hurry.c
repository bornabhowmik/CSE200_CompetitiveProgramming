#include<stdio.h>

int main() 
{
    int n, t;
    scanf("%d %d", &n, &t);
    
    int totalTime = 0;
    
    for (int i=1; i<=n; i++) 
    {
        totalTime += 5*i;

        if (totalTime + t > 240) 
        {
            printf("%d\n", i-1);
            return 0;
        }
    }
    
    printf("%d\n", n);

    return 0;
}







