#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,i,large,small,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    arr = (int *) calloc(n,sizeof(int));

    printf("enter the elementfs for the array");
    for(i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    large = 0;
    for(i=0;i<n;i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }

    small = 0;
    for(i=0;i<n;i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }

    printf("small = %d large = %d ",small,large);
}