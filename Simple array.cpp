#include<stdio.h>
int main(){
    int arr[1000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    
    scanf("%d",&arr[i]);
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    printf("%d\n",sum);
    

}
