#include <stdio.h>
int main()
{
    int arr[5];
    int *p = arr;
    int i, key, found = 0;
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", p + i);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < 5; i++)
    {
        if (*(p + i) == key)
        {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }
    if (found == 0)
        printf("Element not found");
    return 0;
}