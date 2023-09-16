#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char rev_str[50];
    int i, len, j = 0;

    printf("Enter a string reverse: \n");
    scanf("%s", str);

    len = strlen(str);

    for(i = len - 1; i >= 0; i--)
    {
        rev_str[j] = str[i];
        j++;
    }
    rev_str[j] = '\0';

    printf("The reverse of %s is %s", str, rev_str);
    
    return(0);
}