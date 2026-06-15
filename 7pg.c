#include<stdio.h>
#include<stdlib.h>

struct data{
    int rno;
    char name[20],add[20];
    float per;
}s;
int main(){
    
    FILE *fp;
    fp =fopen("student.txt","w");
    printf("enter student details ");
    printf("enter r no");
    scanf("%d",&s.rno);
    printf("enter student name ");
    scanf("%s",s.name);
    printf("enter percentage : ");
    scanf("%f",&s.per);
    fprintf(fp,"%d\n%s\n%f",s.rno,s.name,s.per);
    printf("recorded");
    fclose(fp);

}