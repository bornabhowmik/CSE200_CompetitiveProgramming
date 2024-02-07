#include<stdio.h>
#include<conio.h>
#include<string.h>

char set[60] = "`1234567890-=\\QWERTYUIOP[]ASDFGHJKL;\'ZXCVBNM,./";

int main()
{
    char input[100];
    gets(input);

    int i,l=strlen(input);

    strupr(input);

    for(i=0; i<l; i++)
    {
        int j;
        for(j=0; j<47; j++)
        {
            if(set[j]==input[i] && input[i] !='`' && input[i] != 'Q' && input[i] != 'A' && input[i] != 'Z'){

            printf("%c", set[j-1]);
            }
            else if(input[i] == ' ')
            {
                printf(" ");
                break;
            }
        }
    }

    getch();
}