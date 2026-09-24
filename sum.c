#include<stdio.h>
void sum(int num){
    int a[num],n, sum=0,i;
    printf("enter array elements");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}
void main(){
    int n;
    printf("enter array size");
    scanf("%d",&n);
    sum(n);
}


