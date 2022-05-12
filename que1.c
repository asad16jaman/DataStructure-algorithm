#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct practic{
    int size;
    int total;
    int top;
    int low ;
    int* arr;
};

int isFull(struct practic *x){
    if(x->total == x->size){
        return 1;
    }
    return 0;
};

int isEmpty(struct practic *x){
    if(x->total == 0){
        return 1;
    }
    return 0;
};

int inQue(struct practic *m,int val){
    if(isFull(m)){
        printf("Que is full\n");
        return 0;
    }
    m->top = (m->top+1)%m->size;
    m->arr[m->top] = val;
    m->total++;
    return val;
}

int deQue(struct practic* m){
    if(isEmpty(m)){
        printf("que is empty so you cannot remove any element\n");
        return 0;
    }
    int x = m->arr[m->low];
    m->low = (m->low+1)% (m->size);
    m->total--;
    return x;
}





int main(){
    struct practic* ll;
    ll = (struct practic*)malloc(sizeof(struct practic));
    ll->size = 5;
    ll->total = 0;
    ll->top = -1;
    ll->low = 0;
    ll->arr = (int*)malloc(ll->size*(sizeof(int)));



    inQue(ll,4);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);

    inQue(ll,4);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);

    inQue(ll,4);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);

    inQue(ll,4);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);

    inQue(ll,4);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);

    deQue(ll);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);

    inQue(ll,4);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);

    inQue(ll,4);
    printf("low value is : %d and heigh value is : %d\n",ll->low,ll->top);








    return 0;
}
