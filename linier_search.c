#include<stdio.h>
#include<stdlib.h>


struct Array{
    int A[20];
    int size;
    int length;
};


// Simple linier search In the C Language 
int LinierSearch (struct Array arr, int element){
    int i;
    for(i=0; i<arr.length ; i++){
        if (element == arr.A[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{1,2,3,4,5,3,6,1,7,4,8}, 20, 11};

    printf("%d\n",LinierSearch(arr, 1));
    return 0;
}