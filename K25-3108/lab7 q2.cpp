#include <stdio.h>
int main(){
   int i, n, arr[100];
   printf("Enter the number of elements you want to store in the array: ");
   scanf("%d", &n);
   for (i=0; i<n; i++){
      printf("Enter element %d : ", i+1);
      scanf("%d", &arr[i]);  
   }
   printf("\nValues stored in the array : \n");
   for (i=0; i<n; i++){
       printf(" %d", arr[i]);  
   }
   printf("\n\nValues (stored in the array) in reverse :\n");
   for (i=n-1; i>=0; i--){
       printf(" %d", arr[i]);  
   }
   printf("\n\n");
   return 0;
}

