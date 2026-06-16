#include<stdio.h>
#define max 5

int queue[max];
int front = -1;
int rear = -1; 

int push(int item){
    if(rear==max-1){
        printf("queue is full ");
    }else{
        if(front==-1){
            front = 0;
        rear++;
        queue[rear]=items;
        }
        printf("added %d",items);

    }
}
int pop(){

}
int display(){

}
