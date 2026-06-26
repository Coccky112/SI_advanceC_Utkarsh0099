#include <stdio.h>
int main()
{
    int a[5], b[5];
    int *p = a, *q = b;
    int temp, i;
    printf("Enter first array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", p + i);
    printf("Enter second array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", q + i);
    for (i = 0; i < 5; i++)
    {
        temp = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }
    printf("First array after swapping:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    printf("\nSecond array after swapping:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", *(q + i));
    return 0;
}