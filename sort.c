#include <stdio.h>
void sort(int a[],int n){
    int i,temp;
    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){
                temp=a[i];
                a[i]=a[i-1];
                temp=a[i];
                }
                }
                }
    void main(){
        int a[10],i,n;
        printf("enter size");
        scanf("%d",&n);
        printf("enter array elements");
        for(i=0; i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,n);
    }

