#include <stdio.h>

int main()
{
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5, key = 30;
    int i, found = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}