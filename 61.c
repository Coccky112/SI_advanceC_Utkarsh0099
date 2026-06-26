#include <stdio.h>

int main()
{
    int n, i, target, low, high, mid, flag = 0;

    // Array initialization
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            printf("Element found at position %d\n", mid + 1);
            flag = 1;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (flag == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}