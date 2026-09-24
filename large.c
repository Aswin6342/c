#include<stdio.h>
void la(int *x,int *y){
    int la;
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
    la(&a,&b);
    
}

