
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

 int main() {
	int num;
	int *ptr;
	int **handle;

	num = 14;
	ptr = (int *)malloc(2 * sizeof(int));
	*ptr = num;
	handle = (int **)malloc(1 * sizeof(int *));
	*handle = ptr;

	// Insert extra code here
	printf("ptr address is: %d\n", &ptr);
	printf("handle address is: %d\n", &handle);
	printf("num address is: %d\n", &num);
	return 0;
} 

