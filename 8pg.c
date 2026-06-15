#include<stdio.h>

int main(){
    int a[20],n,i,j,pos,temp,small;
    printf("enter the length of the array : ");
    scanf("%d",&n);

    printf("enter the elements for the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        small =  a[i];
        pos = a[i];
        pos=i;

        for(j=i+1;j<n;j++){
            if(a[j]<small){
                small=a[j];
                pos=j;
            }
        }
        temp = a[pos];
        a[pos]=a[i];
        a[i]=temp;

    }
    printf("sorted elelemts r : ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}