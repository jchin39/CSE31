#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printArr(int *a, int size, char *name){
	//Your code here
    if (name == "Copied") {
        printf("Copied Array's contents: ");
        for (int i = size - 1; i >= 0; i--) {
            printf(" %d ",*(a+i));
        }
    }
    else {
        printf("Original Array's contents: ");
        for (int i = 0; i < size; i++) {
            printf(" %d ",*(a+i));
        }    
        printf("\n"); 
    }
}

int* arrCopy(int *a, int size){
	//Your code here
}

int main(){
    int n;
    int *arr;
    int *arr_copy;
    int i;
    printf("Enter the size of array you wish to create: ");
    scanf("%d", &n);

    //Dynamically create an int array of n items
    //Your code here
    arr = (int*) malloc(n);
    //Ask user to input content of array
	//Your code here
	for (i = 0; i < n; i++) {
        int j = i+1;
        printf("Enter array element #%d: ", j, "\n");
        scanf("%d", (arr + i));
    }
/*************** YOU MUST NOT MAKE CHANGES BEYOND THIS LINE! ***********/
	
	//Print original array
    printArr(arr, n, "Original");

	//Copy array with contents in reverse order
    arr_copy = arrCopy(arr, n);

	//Print new array
    printArr(arr_copy, n, "Copied");

    printf("\n");

    return 0;
}