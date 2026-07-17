#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {1, 2, 4, 5, 3, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest = %d\n", second);

    return 0;
}
