#include<stdio.h>
#include<string.h>
#define s 1000

int main()
{
    char word[s];
    scanf("%s", &word);
    
    if(word[0]!='\0')
    {
        word[0]=toupper(word[0]);
    }

    printf("%s", word);

    return 0;

}