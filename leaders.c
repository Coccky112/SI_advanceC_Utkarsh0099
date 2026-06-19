#include <stdio.h>

int main()
{
int n,i,j;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
int leader = 1;
for(j=i+1;j<n;j++)
{
 if(arr[j] > arr[i])
{
int leader = 0;
break;
}
}
if(leader)
 printf("%d ",arr[i]);
}
return 0;
}