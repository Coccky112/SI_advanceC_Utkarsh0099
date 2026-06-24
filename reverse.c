#include <stdio.h>

int main() {
int arr1[] = {1, 2, 3, 4, 5};
int n = sizeof(arr1) / sizeof(arr1[0]);
for (int i = 0; i < n / 2; i++) {
int temp = arr1[i];
arr1[i] = arr1[n - 1 - i];
arr1[n - 1 - i] = temp;
}
printf("Reversed array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr1[i]);
}
printf("\n");
return 0;
}