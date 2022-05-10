#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


int isFull(){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct Node* x){
    if(x==NULL){
        return 1;
    }
    return 0;
}

struct Node* push(struct Node* top,int val){
    struct Node* pp = (struct Node*)malloc(sizeof(struct Node));
    pp->data = val;
    pp->next = top;
    return pp;
};

int  pop(struct Node* top){
    if(isEmpty(top)){
        return -1;
    };
    struct Node* pp;
    pp = top;
    int x = pp->data;
    top = top->next;
    free(pp);
    return x;
};


int main(){

 struct Node* top;
 struct Node* second;
 struct Node* third;

 top =(struct Node*)malloc(sizeof(struct Node));
 second =(struct Node*)malloc(sizeof(struct Node));
 third =(struct Node*)malloc(sizeof(struct Node));

 top->data = 15;
 top->next = second;
 second->data = 20;
 top->next = third;

 third->data = 30;
 third->next = NULL;

 printf("%d\n",top->data);
 top = pop(top);
 printf("%d\n",top->data);
 push(top,100);
 printf("%d\n",top->data);



}
