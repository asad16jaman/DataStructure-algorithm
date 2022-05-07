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

struct Node* deleteFirstNode(struct Node* head){
    struct node* ptr = head;
    struct node* p = head->next;
    free(ptr);
    return p;
};


void deleteMiddleNode(struct Node* head,int position){
    struct Node* ptr = head;
    int i = 1;
    while(i<position){
        ptr = ptr->next;
    }
    struct Node* q = ptr->next;
    ptr->next = q->next;
    free(q);
    q = NULL;
}

void deleteLastLinkNode(struct Node* head){
    struct Node* p = head;
    struct Node* q = p->next;
    while(q->next != NULL){
        p = p->next;
        q = p->next;
    };
    p->next = NULL;
    free(q);
}

void deleteFixedtLinkNode(struct Node* head,int value){
    struct Node* p = head;
    struct Node* q = p->next;
    while(q->next != NULL && q->data != value){
        p = p->next;
        q = p->next;
    };
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
}

int main(){
    struct Node* head;
    struct Node* b;
    struct Node* c;
    struct Node d;
    struct Node* x;
    head = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));
    x = (struct Node*)malloc(sizeof(struct Node));

    head->data = 45;
    head->next = b;

    b->data = 55;
    b->next = x;

    x->data = 100;
    x->next = c;

    c->data = 65;
    c->next = &d;

    d.data = 85;
    d.next = NULL;

    //head = deleteFirstNode(head);
    //deleteMiddleNode(head,1);
    //deleteLastLinkNode(head);
    deleteFixedtLinkNode(head,100);
    fun(head);


return 0;
}
