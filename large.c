#include<stdio.h>
void largest(int n){
    int a[n],i,large;
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    
     } 
    large=a[0];
    for(i=1;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
        else{
            continue;
        }
    }
    printf("largest is   %d",large);
}
void main(){
    int n;
    printf("enter size ");
    scanf("%d",&n);
    largest(n);
}

        
