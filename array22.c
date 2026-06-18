#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, j;
    int n = 5;
    for (int j = 0; j < 5; j++)

    {
        printf("the array of j arr[%d] is %d\n", j, arr[j]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[4 - i] = temp;
    }

    printf("this is the gap\n");

    for (int k = 0; k < 5; k++)
    {
        printf("the array of k arr[%d] is %d\n", k, arr[k]);
    }

    return 0;
}
