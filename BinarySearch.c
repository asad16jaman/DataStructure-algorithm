#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int bynarySearch(int arr[],int len,int ele){
    int low,heigh,mid;
    low = 0;
    heigh = len-1;
    mid = (low+heigh)/2;
    while(low<=heigh){

        if(arr[low]==ele || arr[heigh]==ele ||arr[mid]==ele){
            int ind;
            ind = mid;
            (arr[low]==ele) ? ind = low : (arr[heigh]==ele) ? ind = heigh : printf("");

            return ind;
        }
        if(arr[mid]<ele){
            low = mid+1;
            heigh = heigh-1;
            mid = (low+heigh)/2;
        }else{
            low = low+1;
            heigh = mid -1;
            mid = (low+heigh)/2;
        }
    }
    return -1;
}

int linearSearch(int arr[],int len,int ele){
    int i;
    for(i=0;i<len;i++){
        if(arr[i]==ele){
            return i;
        }
    }
}


int main(){

    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("element endex is %d\n",bynarySearch(ar,10,6));
    /*  it is fro Byneary search....
        //for unsorted array . it is requered to sort first then Search....
        int values = {10,5,50,3,1}
        qsort(values, 5, sizeof(int), cmpfunc);
        printf("element endex is %d",bynarySearch(ar,5,1));
    */
    printf("element endex is %d",linearSearch(ar,10,6));



 return 0;
}
