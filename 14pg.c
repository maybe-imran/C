#include<stdio.h>
#define max 5
int stack[max];
int top = -1;

int push(int item){
    if(top==max-1){
        printf("stack is full ");
    }else{
        top ++;
        stack[top]= item;
    }

}

int pop(){
    if(top==-1){
        printf("stack is overflow");
    }else{
        printf("stack is removed %d",stack[top]);
        top--;
    }
}

int display(){
    if(top==-1){
        printf("stack is overflow");
    }else{
        for(int i=0;i<top;i++){
            printf("%d",stack[i]);
        }
    }

}

int main(){
    int ch,item;
    while(1){
        printf("enter ur choice");
        printf("1.push\n2.pop\n3.display\n4.exit\nenter u r choice!!");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("enter the value : to be push : ");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:return 0;
            default : printf("enter valid cchoice ");
        }
    }

}
