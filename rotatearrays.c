#include <stdio.h>

int main() {
    int arr[100], n, i, d, choice, temp[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &d);

    d = d % n;

    printf("1. Left Rotate\n2. Right Rotate\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        for(i = 0; i < n; i++)
            temp[i] = arr[(i + d) % n];
    }
    else {
        for(i = 0; i < n; i++)
            temp[(i + d) % n] = arr[i];
    }

    printf("Rotated Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}