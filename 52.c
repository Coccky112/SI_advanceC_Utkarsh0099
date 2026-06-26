// WAPTODUPLICATEELEMNTSOFARRAY
#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}

/*OUTPUT
Enter size of array: 5
Enter array elements:
1 2 3 1 2 
Duplicate elements are: 1 2 */
