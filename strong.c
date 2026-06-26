#include <stdio.h>

int main() {
    int n, temp, rem, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        rem = temp % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}