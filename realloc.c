#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Store 3 values
    for (int i = 0; i < 3; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Resize to hold 5 integers
    int *temp = realloc(arr, 5 * sizeof(int));

    if (temp == NULL) {
        printf("Reallocation failed\n");
        free(arr);
        return 1;
    }

    arr = temp;

    // Store the new elements
    arr[3] = 40;
    arr[4] = 50;

    // Print all elements
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
