#include <stdio.h>
#include <stdlib.h>

struct stak{
    int mysize;
    int top;
    int *arr;
};

int isEmpty(struct stak* p){
    if(p->top==-1){
        return 1;
    };
    return 0;
};
int isFull(struct stak* p){
    if(p->top == p->mysize-1){
        return 1;
    };
    return 0;
};

void push(struct stak *sk,int val){
    if(isFull(sk)){
        printf("stack overflow...\n");
    }else{
        sk->top++;
        sk->arr[sk->top] = val;
    }

}

int pop(struct stak *sk){
    if(isEmpty(sk)){
        printf("stack is empty so you cannot pop ...\n");
        return -1;
    }else{
        int val = sk->arr[sk->top];
        sk->top--;
        return val;
    }

}

int peek(struct stak* a,int value_in){
    if(a->top>=value_in-1){
        return a->arr[value_in-1];
    }
    return -1;
}


int main(){

    struct stak* k = (struct stak*)malloc(sizeof(struct stak));
    k->mysize = 10;
    k->top = -1;
    k->arr = (int*)malloc(sizeof(int));

    printf("%s",isEmpty(k)?"it is empty stack\n":"\n");
    printf("%s",isFull(k)?"it is full stack\n":"\n");

    push(k,10);
    push(k,20);
    push(k,30);


    printf("%s",isEmpty(k)?"it is empty stack\n":"\n");
    printf("%s",isFull(k)?"it is full stack\n":"\n");

    printf("%d",peek(k,6));



    return 0;
}
