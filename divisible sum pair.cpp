#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if ( (a[i]+a[j])%k == 0)
                sum++;
        }
    }
    
    printf("%d\n",sum);
    
    return 0;
}
