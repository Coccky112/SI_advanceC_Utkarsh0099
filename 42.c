#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6, k = 2, temp[6];

    k = k % n;

    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
