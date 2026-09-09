#include<stdio.h>
struct book{
    int id;
    char name[50];
    char au[50];
    float price;
};
void main(){
    int n,i;
    printf("enter no. of books");
    scanf("%d",&n);
    struct book e[n];
    for(i=0;i<n;i++){
        printf("enter book id of %d",i+1);
        scanf("%d",&e[i].id);
        printf("enter book name");
        scanf("%s",e[i].name);
        printf("enter author name");
        scanf("%s",e[i].au);
        printf("enter book price");
        scanf("%f",&e[i].price);
    }
    for(i=0;i<n;i++){
        printf("book details::\n");
        printf("id:%d\n name:%s\n author:%s\n price:%f\n",e[i].id,e[i].name,e[i].au,e[i].price);
    }
}

