// ----------------------------------------This is the code for the lInked list with the explanation----------------------------

#include<stdio.h>
#include<stdlib.h>

// make the structure for the node
struct node{
    int data; // This is the data field of the Linked list
    struct node *next; // this is the pointer to the next list
}*first = NULL; //There is a 1st pointer for the inicial position set as the null


//creat a list from the array
void creat (int a[], int n){
    int i;
    struct node *t , *last; // taking a temporary pointer ans last pointer for the linked list
    first = (struct node*) malloc(sizeof(struct node)); // make a frist node in the heap memory and assign it to the varibable to the frist
    first -> data = a[0]; // first element of the array is saved in the first node
    first -> next = NULL; // make rhe nest element to the null
    last = first; // now the last node and frist noed points to the same node

    for ( i = 1; i < n; i++){
        
        t = (struct node *)malloc(sizeof(struct node));
        t ->data = a[i];
        t -> next = NULL;
        last -> next = t;
        last = t;

    }
    
    
}

int main(){
    int A[] = {3,5,7,10,15};
    return 0;
}