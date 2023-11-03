#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int count[26];
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        count[value]++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if (count[i] != 0)
        {
            printf("%c-%d\n", i + 97, count[i]);
        }
    }

    return 0;
}