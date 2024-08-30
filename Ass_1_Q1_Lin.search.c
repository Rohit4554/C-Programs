#include <stdio.h>

int linear_search(int A[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (A[i] == key)
            return i;
    }
    return -1;
}

void accept(int A[], int n) {
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
}

int main() {
    int A[20], n, i, position, key;
    
    printf("How many numbers: ");
    scanf("%d", &n);
    
    accept(A, n);
    
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    
    position = linear_search(A, n, key);
    
    if (position == -1)
        printf("%d is not found in the array.\n", key);
    else 
        printf("%d is found at position: %d\n", key, position);
    
    return 0;
}
