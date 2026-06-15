#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fp;
    fp=fopen("oddfile.txt","w");
    fp=fopen("evenfile.txt","w");
    int i,n;
    printf("enter the range");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i%2==0){
            fprintf(evenfile,"%d\t",i);
        }else{
            fprintf(oddfile,"%d\t",i);
        }
    }
    fclose(evenfile);
    fclose(oddfile);
}