#include<stdio.h>

int main(){
    int n,i,j,a[20],temp;
    printf("enter the size of the array");
    scanf("%d",&n);

    printf("enter the elements for the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 

    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted elementd are : ");
    for(i=0;i<n;i++){
        printf("%d  \t",a[i]);
    }
}