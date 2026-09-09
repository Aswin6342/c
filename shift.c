#include<stdio.h>
void shift(int arr[],int*n,int num){
for(int i=*n;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=num;
(*n)++;
}
void main(){
    int arr[10];
    int i,n,num;
    printf("enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter elements");
        scanf("%d",&arr[i]);
    }
    printf("enter element to input at top");
    scanf("%d",&num);
    shift(arr,&n,num);
    printf("array after");
    for(i=0;i<n;i++){
i        printf("%d\n",arr[i]);
    }
}

