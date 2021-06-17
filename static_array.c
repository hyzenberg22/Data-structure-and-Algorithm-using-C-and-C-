#include<stdio.h>
#include<stdlib.h>


// This is the structure of the Array, 1. array is defined 20. no of elements of the array ie,size and the length of the array ie , 20-max
struct Array{
    int A[20];
    int size;
    int length;
};

//Making a function for the Display of the array
void display_array(struct Array arr){
    int i;
    printf("\n The elements are \n");
    for ( i = 0; i< arr.length ; i++){
        printf("%d\n" , arr.A[i]);
    }
}


// Making a function for the append in the Array
void append_arr(struct Array *arr, int value){
    if(arr->length < arr->size){ //This is using the address of the array struct
        arr->A[arr->length++]=value;
    }
    else{
        printf("The array length is out of range");
    }
}


// Making a function for inserting in the array 
void insert_arr(struct Array *arr, int index, int value){
    int i;
    if( index >=0 && index < arr->length ){
        for ( i = arr->length ; i >index ; i--){
            arr->A[i] = arr->A[i-1];  // Coping the exement to the previous position
        }
        arr->A[index] = value; // After Reaching to the place insert the value
        arr->length ++; // After inserting the value the length should be Increased
        
    }
    else{
        printf("The Index is out of range..!");
    }
}


// Making a Function For Deleating an Array

void Array_delete( struct Array *arr, int index){
    int i;
    int x = arr->A[index]; // Saving the Index Value 
    if( index>=0 && index < arr->length){
        for(i = index; i < arr->length-1 ; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length --;
        printf("The %d  is Deleated" ,x);
    }
    else{
        printf("Index %d is out of Range..!" ,index);
    }
}








// This is the main function Of the Programme
int main(){
    // Initiclize the array with the fixed size 
    struct Array arr1 = {{1,2,3,4,5}, 20, 5};
    display_array(arr1);
    append_arr(&arr1, 25 ); // Passing the address of the array in the append function
    display_array(arr1);
    insert_arr(&arr1, 2, 50);
    display_array(arr1);
    Array_delete(&arr1, 2);
    display_array(arr1);
    return 0;
}