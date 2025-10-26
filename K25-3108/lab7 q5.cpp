#include <stdio.h>
#include <string.h>
int main() {
    char str[1024];
    char whitespaces[1024];
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    sscanf(str, "%[ \t\n]", whitespaces);  
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i]==' ' || str[i]=='\t' || str[i]=='\n') {
            count++;
        }
    }
    printf("Number of whitespace characters: %d\n", count);
    return 0;
}

