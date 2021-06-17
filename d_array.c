#include<stdio.h>
#include<stdlib.h>


// This is the structure of the Array
struct d_Array{
    int *A;
    int size;
    int length;
};

//Making a function for the Display of the array
void display_array(struct d_Array arr){
    int i;
    printf("\n The elements are \n");
    for ( i = 0; i< arr.length ; i++){
        printf("%d\n" , arr.A[i]);
    }
}

int main(){
    printf("This is the Program for the Array");
    // This is the Dynamic array size is given by the user, This format is more preferable
    int n , i;
    struct d_Array arr;
    printf("Enter the size of the Array:-");
    scanf("%d", &arr.size);
    arr.A = (int *) malloc (arr.size*sizeof(int));
    arr.length =0;


    printf("Enter the number os the Numbers:- ");
    scanf("%d", &n);

    printf("Enter all the Elements\n");
    for(i=0; i<n;i++){
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    display_array(arr);

}