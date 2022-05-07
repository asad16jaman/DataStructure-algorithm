#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void myfun(struct Node* head){
    while(head != NULL){
        printf("Your value is : %d\n",head->data);
        head = head->next;
    }
}

struct Node* insertinFirst(struct Node* head,int value){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = value;
    return ptr;

};

struct Node* insertinMiddle(struct Node* head,int value,int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i=1;
    while(i<index){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = value;
    return ptr;
};

struct Node* insertAfter(struct Node* head,int value){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    struct Node* p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return ptr;
};

struct Node* insertAfterOneNode(struct Node* nNod,int value){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = nNod->next;
    nNod->next = ptr;
    return ptr;
};

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 14;
    second->next = third;

    third->data = 16;
    third->next = fourth;

    fourth->data = 18;
    fourth->next = NULL;
    myfun(head);

    printf("after addd in the first.......\n");
    head = insertinFirst(head,111);
    myfun(head);

    printf("after add in the 4 position....\n");
    insertinMiddle(head,5000,4);
    myfun(head);

    printf("after add in the last position\n");
    insertAfter(head,0);
    insertAfter(head,01);
    insertAfter(head,02);
    myfun(head);

    printf("adding after the fixed node\n");
    insertAfterOneNode(second,15);
    myfun(head);

    return 0;
}
