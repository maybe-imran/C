#include<stdio.h>
void tow(int n,char f,char t,char aux){
    if(n==0){
        printf("move disk 1 from %c to %c\n",f,t);
        return;
    }
    tow(n-1,f,aux,t);
    printf("move disk %d from %c to %c\n",n,f,t);
    tow(n-1,aux,t,f);
}
int main(){
    int n;
    printf("enter no of diskz ");
    scanf("%d",&n);
    tow(n,'a','b','c');
}