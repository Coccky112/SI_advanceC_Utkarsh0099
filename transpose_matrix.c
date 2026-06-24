#include <stdio.h>
int main() {
int a[5][3], i, j;
printf("Enter 15 elements:\n");
for(i = 0; i < 5; i++) {
for(j = 0; j < 3; j++) {
scanf("%d", &a[i][j]);
}
}
printf("\nTranspose Matrix:\n");
for(i = 0; i < 3; i++) {
for(j = 0; j < 5; j++) {
printf("%d ", a[j][i]);
}
printf("\n"); 
}                
return 0;
}                     