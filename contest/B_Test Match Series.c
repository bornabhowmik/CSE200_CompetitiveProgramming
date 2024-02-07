#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int match_result[5];
        int india_won  = 0;
        int england_won = 0;
        
        for(int j=0; j<5; j++)
        {
            scanf("%d",&match_result[j]);
            
            if(match_result[j]==1)
            {
                india_won++;
            }
            else if(match_result[j]==2)
            {
                england_won++;
            }
        }

        if(india_won>england_won)
        {
            printf("India\n");
        }
        else if(england_won>india_won)
        {
            printf("England\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    
    return 0;
}

        
        