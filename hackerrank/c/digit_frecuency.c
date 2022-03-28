#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    char c = *s;
    int i=0;
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    
    while(c != '\0') {
        
        if(c >= 48 && c <= 57) {
            count[c - '0']++;
        }
        
        i++;
        c=*(s+i);
    }

    for (i=0; i<10; i++) {
        printf("%d ", count[i]);
    }
    
    printf("\n");
    return 0;
}