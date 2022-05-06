#include <stdio.h>
#include <stdlib.h>

int deleteElement(int arr[],int *length,int index,void (*print)( int ar[],int)){
    if(index >= *length){
        printf("It is not possible to delete");
        return -1;
    }
    int i;
    for(i=index;i<*length-1;i++){
        arr[i] = arr[i+1];
    }
    arr[*length-1] = 0;
    *length = *length-1;
    (*print)(arr,*length);
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
   deleteElement(myarry,&len,2,&printarry);
   deleteElement(myarry,&len,2,&printarry);
   deleteElement(myarry,&len,2,&printarry);
   deleteElement(myarry,&len,2,&printarry);
   deleteElement(myarry,&len,0,&printarry);

   printf("hellow world");

   return 0;
}
