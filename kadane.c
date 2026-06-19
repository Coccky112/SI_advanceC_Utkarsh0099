#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
int max=arr[0];
int current=arr[0];
for(i=1;i<n;i++){
    if(current+arr[i]>arr[i])
    current=current+arr[i];
    else
    current=arr[i];
    if(current>max)
    max=current;

}
printf("max sum=%d",max);

}
return 0;
}