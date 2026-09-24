#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main(){
    int a,b;
    printf("enter first element");
    scanf("%d",&a);
    printf("enter  second element");
    scanf("\n%d",&b);
    printf("\n%d",a);
    printf("\t%d\n",b);
    swap(&a,&b);
    printf("after : %d  %d",a,b);
}

