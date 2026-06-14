#include<stdio.h>
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int bino(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int i,j,n;
    printf("enter the no of rowss : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d",bino(i,j));
        }
        printf("\n");
    }
}