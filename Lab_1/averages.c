#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    int count = 0, eCount = 0, oCount = 0;
    int arr[10];
    int evens[10];
    int odds[10];
    float sumOdds = 0, sumEvens = 0;
    printf("Please enter the 1st integer:  \n"); 
    scanf("%d", &x);
    arr[count] = x;
    while (x != 0) {
        count++;
        if (count == 1 ) {
            printf("Please enter the 2nd integer:  \n"); 
            scanf("%d", &x);
            arr[count] = x;
        }
        if (count == 2 ) {
            printf("Please enter the 3rd integer:  \n"); 
            scanf("%d", &x);
            arr[count] = x;
        }
        if (count == 3 ) {
            printf("Please enter the 4th integer:  \n"); 
            scanf("%d", &x);
            arr[count] = x;
        }
        if (count == 4 ) {
            printf("Please enter the 5th integer:  \n"); 
            scanf("%d", &x);
            arr[count] = x;
        }
        if (count == 5 ) {
            printf("Please enter the 6th integer:  \n"); 
            scanf("%d", &x);
            arr[count] = x;
        }
        if (count == 6) {
            printf("Please enter the 7th integer:  \n"); 
            scanf("%d", &x);
            arr[count] = x;
        }
        if (count == 7 ) {
            printf("Please enter the 8th integer:  \n"); 
            scanf("%d", &x);
            arr[count] = x;
        }
        
    }
    for (int i = 0; i < count; i++) {
        int sum = 0;
        int num = abs(arr[i]);
        while (num > 0) {
            int dig = num % 10;
            num/=10;
            sum = sum + dig;
        }
            if (sum % 2 == 0) {
                evens[eCount] = arr[i];
                eCount++;
            }
            if (sum % 2 != 0) {
                odds[oCount] = arr[i];
                oCount++;
            }
    }
    if (eCount > 0) {
        for (int l = 0; l < eCount; l++) {
        }
        for (int k = 0; k < eCount; k++) {
            sumEvens = sumEvens + evens[k];
        }  
    }
    if (oCount > 0) {
    for (int m = 0; m < oCount; m++) {
    }    
    
    for (int j = 0; j < oCount; j++) {
        sumOdds = sumOdds + odds[j];
    }   
} 
printf("sumOdds = %2f\n", sumOdds / oCount);
printf("sumEvens = %2f\n", sumEvens / eCount);

    return 0;
}