// leanear search 
#include<stdio.h>
int main(){
    int n,a[20],i,pos,search;
    printf("enter the size of the arra");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("enter the element to find : ");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i]==search){
            pos = 1;
            break;
        }
    }
    if(pos){
        printf("found at location %d",i+1);
    }else{
        printf("not found");
    }
}