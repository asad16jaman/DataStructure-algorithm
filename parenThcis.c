#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stk{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stk* m){
    if(m->top == -1){
        return 1;
    }
    return 0;
}
int isFull(struct stk* m){
    if(m->top >= m->size-1){
        return 1;
    }
    return 0;
}

char push(struct stk* m,char o){
    if(isFull(m)){
        printf("stack is overflow cannot add %c",o);
        return 'c';
    }
    m->top++;
    m->arr[m->top] = o;
    return m->arr[m->top];
}

char pop(struct stk* m){
    if(isEmpty(m)){
        printf("stack is underflow cannot pop");
        return ;
    }
    char x = m->arr[m->top];
    m->top--;
    return x;
}

int chackParenThisis(char * x){
    struct stk* ml;
    ml = (struct stk*)malloc(sizeof(struct stk));
    ml->size = 100;
    ml->top = -1;
    ml->arr = (char*)malloc(ml->size*(sizeof(char)));
    int i;
    for(i=0; x[i] != '\0';i++){
        if(x[i]=='('){
            push(ml,'(');
           }else if(x[i]==')'){
                if(isEmpty(ml)){
                    return 0;
                }
                pop(ml);
           }
    }

    if(isEmpty(ml)){
        return 1;
    }
}

int chackMultipleParen(char * x){
    struct stk* ml;
    ml = (struct stk*)malloc(sizeof(struct stk));
    ml->size = 100;
    ml->top = -1;
    ml->arr = (char*)malloc(ml->size*(sizeof(char)));
    int i;
    for(i=0; x[i] != '\0';i++){
        if(x[i]=='(' || x[i]=='{' || x[i]=='['){
            push(ml,x[i]);

           }else if(x[i]==')' || x[i]=='}' || x[i]==']'){
                if(isEmpty(ml)){
                    return 0;
                }
                if((x[i]==')' && ml->arr[ml->top] == '(') || (x[i]=='}' && ml->arr[ml->top] == '{') || (x[i]==']' &&ml->arr[ml->top] == '[')){
                    pop(ml);
                }

           }
    }

    if(isEmpty(ml)){
        return 1;
    }else{
    return 0;
    }
}

int main(){

    char *x = "({[2+1]})54";

    if(chackMultipleParen(x)){
        printf("tik ace");
    }else{
        printf("somossa ace...");
    }

return 0;

}
