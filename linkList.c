#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int fun(struct Node *head){
    while(head != NULL){
        printf("%d is your data\n",head->data);
        head = head->next;
    }
    return 0;
}

int main(){
    struct Node* a;
    struct Node* b;
    struct Node* c;
    struct Node d;
    struct Node* x;
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));
    x = (struct Node*)malloc(sizeof(struct Node));

    a->data = 45;
    a->next = b;

    b->data = 55;
    b->next = x;

    x->data = 1000;
    x->next = c;

    c->data = 65; //(*c).data
    c->next = &d;

    d.data = 85;
    d.next = NULL;

    fun(a);
    return 0;
}
