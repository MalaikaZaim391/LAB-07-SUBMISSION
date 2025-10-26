#include <stdio.h>
int main() {
    int array1[5], array2[5], merged_array[10];
    printf("Enter five elements in the first array:\n");
    for (int i=0; i<5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array1[i]);
    }
    printf("\nEnter five elements in the second array:\n");
    for (int i=0; i<5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array2[i]); 
    }
    for (int i=0; i<5; i++) {
        merged_array[i] = array1[i];
    }
    for (int i=0; i<5; i++) {
        merged_array[i+5] = array2[i];
    }
    printf("\nFirst Array: ");
    for (int i=0; i<5; i++) {
        printf("%d ", array1[i]);
    }
    printf("\nSecond Array: ");
    for (int i=0; i<5; i++) {
        printf("%d ", array2[i]);
    }
    printf("\nMerged Array: ");
    for (int i=0; i<10; i++) {
        printf("%d ", merged_array[i]);
    }
    printf("\n");
    return 0;
}

