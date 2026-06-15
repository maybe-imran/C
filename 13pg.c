#include<stdio.h>

int bsearch(int a[],int low,int high,int search){
    if(low>high){
        return -1;
    }
    int mid = (low+high) / 2;

    if(a[mid]==search){
        return mid;
    }else if(search<a[mid]){
        bsearch(a,low,mid+1,search);
    }else{
        bsearch(a,mid+1,high,search);
    }
}

int main(){
    int a[20],pos,search,n,i;

    printf("enter the size of a ");
    scanf("%d",&n);

    printf("enter elements for a ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to search");
    scanf("%d",&search);

    pos = bsearch(a,0,n-1,search);

    if(pos==-1){
        printf("eke not found ");
    }else{
        printf("foud at location %d ",pos+1);
    }
}