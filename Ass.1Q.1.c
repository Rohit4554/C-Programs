#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linear_search(int A[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (A[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n, x, position;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int randomArray[n];
    
    srand(time(NULL)); // Seed the random number generator with the current time
    
    printf("Generated array: ");
    for (int i = 0; i < n; i++) {
        randomArray[i] = rand() % 100; // Generating random integers between 0 and 99
        printf("%d ", randomArray[i]);
    }
    
    printf("\nEnter a number to search for: ");
    scanf("%d", &x);
    
    position = linear_search(randomArray, n, x);
    
    if (position == -1)
        printf("%d is not found in the array.\n", x);
    else 
        printf("%d is found at position: %d\n", x, position);
    
    return 0;
}
