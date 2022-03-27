/* Pointer: A pointer in C is a way to share a memory address among different contexts (primarily functions) */

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum = (*a) + (*b);
    int diff = abs((*a) - (*b));
    
    (*a) =  sum;
    (*b) = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}