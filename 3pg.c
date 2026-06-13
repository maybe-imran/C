#include<stdio.h>
int feb(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else {
        return feb(n-1)+feb(n-2);
    }
}
int main(){
    int n,i;
    printf("enter the length of feb : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d\n",feb(i));
    }
}