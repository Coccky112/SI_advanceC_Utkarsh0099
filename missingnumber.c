#include <stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int arr[100];
int sum=0;
for(i=0;i<n-1;i++)
{
scanf("%d",&arr[i]);
sum += arr[i];
}
int total = n*(n+1)/2;
printf("%d",total-sum);
return 0;
}