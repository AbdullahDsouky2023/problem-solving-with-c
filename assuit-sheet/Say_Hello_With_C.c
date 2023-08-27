#include <stdio.h>
#define MAX_LENGTH 1000 

/**
 * main - Given a name S. Print "Hello, (name)" without parentheses.
 * 
 * Return: Always 0
*/

int main()
{
    char test[MAX_LENGTH];

    scanf("%s",test);
    printf("Hello, %s",test);
    return 0;
}
