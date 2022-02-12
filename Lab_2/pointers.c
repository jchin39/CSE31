#include <stdio.h> 
 
int main() { 
    int x , y , *px , *py; 
    int arr[10]; 
    px = &x;
    py = &y;
    printf("x is: %d\n", x);
    printf("y is: %d\n", y);
    printf("arr[0] is: %d\n", arr[0]);
    printf("address of x is: %d\n", &x);
    printf("address of y is: %d\n", &y);
    printf("address of px is: %d\n", &px);
    printf("address of py is: %d\n", &py);
    printf("value of px is: %d\n", px);
    printf("value of py is: %d\n", py);   
    for (int i = 0; i < 10; i++) {
        printf( "array is: %d\n",  *(arr + i));
    }      
    printf("address of arr is: %d\n", arr);
    printf("address of arr is: %d\n", &arr);
    return 0; 
 } 