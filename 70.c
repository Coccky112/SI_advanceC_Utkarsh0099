#include <stdio.h>
void reverse()
{
    char ch;
    scanf("%c", &ch);
    if (ch != '\n')
    {
        reverse(); // Recursive call
        printf("%c", ch);
    }
}
int main()
{
    printf("Enter a sentence: ");
    reverse();
    return 0;
}