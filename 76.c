#include <stdio.h>
int main()
{
    int a[5], b[5];
    int *p = a, *q = b;
    int i;
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", p + i);
    for (i = 0; i < 5; i++)
        *(q + i) = *(p + i);
    printf("Copied array:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", *(q + i));
    return 0;
}