#include<stdio.h>
struct student{
    int id;
    char name[50];
    int m;
    int s;
    int e;
};
void main(){
    int n,i,total=0;
    float avg;
    printf("enter no. of students");
    scanf("%d",&n);
    struct student e[n];
    for(i=0;i<n;i++){
        printf("enter  roll no of %d\t",i+1);
        scanf("%d",&e[i].id);
        printf("enter student name");
        scanf("%s",e[i].name);
        printf("enter maths mark");
        scanf("%d",&e[i].m);
        printf("enter science mark");
        scanf("%d",&e[i].s);
        printf("enter englis mark");
        scanf("%d",&e[i].e);
    }
    for(i=0;i<n;i++){
        printf("student  details::\n");
        printf("rollno:%d\n name:%s\n maths:%d\n science:%d\n english:%d\n ",e[i].id,e[i].name,e[i].m,e[i].s,e[i].e);
        total=e[i].m+e[i].s+e[i].e;
        avg=total/3;
        printf("average is %f",avg);
    }
}


