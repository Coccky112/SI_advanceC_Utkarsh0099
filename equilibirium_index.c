#include <stdio.h>

int main() {
int arr1[] = {1, 2, 5, 1, 2};
int n = sizeof(arr1) / sizeof(arr1[0]);
for (int i = 0; i < n; i++) {
int leftsum = 0, rightsum = 0;
for (int j = 0; j < i; j++) {
leftsum = leftsum + arr1[j];
}
for (int k = i + 1; k < n; k++) {
 rightsum = rightsum + arr1[k];
}
if (leftsum == rightsum) {
printf("equilibrium index = %d\n", i);
}
}
return 0;
}