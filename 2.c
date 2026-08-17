#include <stdio.h>

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int found = 0;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("First repeated element is: %d\n", arr[i]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("No repeated element found.\n");
    }

    return 0;
}   
 
