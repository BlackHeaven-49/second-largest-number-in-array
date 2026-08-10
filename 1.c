#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int first, second;
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }
    
    for (int i = 2; i < size; i++) {
        if (arr[i] > first) {
            second = first;  
            first = arr[i];  
        } 
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i]; 
        }
    }
      printf("Second largest: %d\n", second);
    return 0;
}   
