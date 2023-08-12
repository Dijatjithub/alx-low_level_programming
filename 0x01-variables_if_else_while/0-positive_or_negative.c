#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0));
    int n = rand() * 2 - RAND_MAX; 
    
    printf("%d ", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

