#include<stdio.h>
void sum(int a[],int n){
    int sum=0,i;
    printf("enter array elements");
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
}
void main(){
    int n;
    int a[10];
    printf("enter array size");
    scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }



    sum(a,n);
}

