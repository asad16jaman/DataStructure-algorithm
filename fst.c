#include <stdio.h>
#include <stdlib.h>

int insertarry(int arr[],int *length,int sizeofarry,int index,int value,void (*xx)( int ar[],int)){
    if(*length>=sizeofarry){
        return -1;
    }
    int i;
    for(i=*length;i>index;i--){
        arr[i] = arr[i-1];
    };
    *length = *length+1;
    arr[index] = value;
    (*xx)(arr,*length);
    return 1;
}
void printarry(int arr[],int len){
    int i;
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);
    printf("\n");
}



int main(){
   int myarry[100]={1,2,5,4,9,88};
   int len = 6;
   int sizeo=100;
   insertarry(myarry,&len,sizeo,2,100,&printarry);
   insertarry(myarry,&len,sizeo,2,20,&printarry);
   insertarry(myarry,&len,sizeo,2,50,&printarry);



   return 0;
}
