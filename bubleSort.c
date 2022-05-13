#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define capacity 13

void myBubleshort(int x[],int j){
    int i,ad;
    while(j != 1){
        ad = 0;
        for(i=0;i<j-1;i++){
            int p;
            if(x[i]>x[i+1]){
                p = x[i];
                x[i] = x[i+1];
                x[i+1] = p;
                ad++;
                }
        }
        if(ad==0){
            break;
        }
        j--;
    }
}

void printArry(int x[],int o){
    int i;
    for(i=0;i<o-1;i++){
        printf("%d, ",x[i]);
    }
    printf("%d",x[i]);
}


int main(){
    int x[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int j=capacity;
    myBubleshort(x,j);
    printArry(x,j);




return 0;

}
