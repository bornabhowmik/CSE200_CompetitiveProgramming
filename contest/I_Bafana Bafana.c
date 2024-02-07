#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, player, player1, player2, player3;

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d", &player1, &player2, &player3);

        player = ((player2+player3)%player1);

        if(player == 0)
        {
            player = player3;
        }

        printf("Case %d: %d\n", i, player);
    }

    return 0;
}