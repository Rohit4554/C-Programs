#include <stdio.h>
#include <stdlib.h>

int compcount = 0;

int linear_search(int A[], int n, int key) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        compcount++;
        if (A[i] == key)
            return i;
    }
    return -1; // Return -1 if key is not found
}

void accept(int A[], int n) 
{
    int i;
    printf("Enter %d elements:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
}

int main() {
    int A[20], key, n, position, i;
    
    printf("How many numbers: ");
    scanf("%d", &n);
    
    accept(A, n);
    
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    
    position = linear_search(A, n, key);
    
    if (position == -1)
        printf("%d is not found in array.\n", key);
    else
        printf("%d is found at position: %d\n", key, position);
    
    printf("Total No. of comparisons numbers: %d\n", compcount);
    
    return 0;
}
