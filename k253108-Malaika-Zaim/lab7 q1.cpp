#include<stdio.h>
int main() {
    int array[50], size, i, sum = 0;
    printf("Enter array size: ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for (int i=0; i<size; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    for(i=0; i<size; i++)
        sum+=array[i]; 
    printf("Sum of the array = %d\n",sum); 
    return 0;
}
