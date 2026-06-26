#include <stdio.h>
int isPrime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int isArmstrong(int n)
{
    int temp = n, rem, sum = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return (sum == n);
}
int isPerfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return (sum == n);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("Prime Number\n");
    else
        printf("Not Prime\n");
    if (isArmstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");
    if (isPerfect(n))
        printf("Perfect Number\n");
    else
        printf("Not Perfect\n");
    return 0;
}
