#include<stdio.h>
void fact(int n){
    int fact=1,i;
    for(i=n;i>0;i--){
        fact=fact*i;
    }
    printf("factorial of %d is %d\n",n,fact);
}
void main(){
    int n;
    printf("enter a number to find the factorial ");
    scanf("%d",&n);
    fact(n);
}

