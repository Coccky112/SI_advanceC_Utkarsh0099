#include <stdio.h>

int main() {
    int n, i, pos, element;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &element);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = element;
    n++;

    printf("Updated Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}