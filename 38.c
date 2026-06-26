//Sum_of_diagonals
#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int primarySum = 0, secondarySum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        primarySum += a[i][i];
        secondarySum += a[i][n - 1 - i];
    }

    printf("Sum of primary diagonal = %d\n", primarySum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    return 0;
}

/*output
Enter order of square matrix: 2
Enter elements of matrix:
5 6 
1 3 
Sum of primary diagonal = 8
Sum of secondary diagonal = 7*/