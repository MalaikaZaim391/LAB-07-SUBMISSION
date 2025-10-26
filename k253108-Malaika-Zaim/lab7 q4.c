#include <stdio.h>
int main() {
    char buffer[1024]; //buffer to hold non-digit sequences
    printf("Enter a string: ");
    scanf("%*[0-9]"); //discarding leading digits
    printf("String without numbers: ");
    while (scanf("%[^0-9\n]", buffer) == 1) {
        printf("%s", buffer);
        scanf("%*[0-9]");   //discarding following digits
    }
    printf("\n");
    return 0;
}

