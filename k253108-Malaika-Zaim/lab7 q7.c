#include <stdio.h>
//declaring and defining funtion
int SEARCH(int array[], int size, int target) {
	int i;
    for(i=0; i<size; i++) {
        if (array[i]==target) {
            return i;
        }
    }
    return -1;
}
//calling the function to test its working
int main() {
    int array[10], target, index, i;
    printf("Enter 10 integers:\n");
    for (i=0; i<10; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("What number do you want to search: ");
    scanf("%d", &target);
    index = SEARCH(array, 10, target);
    if (index != -1) {
        printf("Number %d found at index %d.\n", target, index);
    } else {
        printf("Number %d not found in the array.\n", target);
    }
    return 0;
}

