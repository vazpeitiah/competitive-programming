#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    char c = *(s);
    int i = 0;
    while(c != '\0') {
        
        if(c != ' ') {
            printf("%c", c);
        }else {
            printf("\n");
        }
        i++;
        c = *(s + i);
    }
    
    //Write your logic to print the tokens of the sentence here.
    return 0;
}