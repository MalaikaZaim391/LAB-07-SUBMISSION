#include <stdio.h>
int main() {
    int N;
    printf("Enter the array size: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements (0 to %d)\n", N, N-1);
    for(int i=0; i<N; i++) {
    	printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int duplicates[N]; 
    int dup_count = 0;
    for(int i=0; i<N; i++) {
        int count = 0;
        int already_counted = 0;
        for(int k=0; k<dup_count; k++) {
            if(arr[i]==duplicates[k]) {
                already_counted = 1;
                break;
            }
        }
        if(already_counted)
            continue;
        for(int j=i+1; j<N; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count>0) { 
            duplicates[dup_count] = arr[i];
            dup_count++;
        }
    }
    if(dup_count==0) {
        printf("No duplicates found.\n");
    } else {
        printf("Number ");
        for(int i=0; i<dup_count; i++) {
            if(i>0) printf(" and "); 
            printf("%d", duplicates[i]);
        }
        printf(" in array occur more than once.\n");
    }
    return 0;
}
