#include <stdio.h>
int main() {
    int v, d, c, result = 0;
    printf("Please enter the first number here: ");
    scanf("%d", &v);
    printf("Please enter the second number here:");
    scanf("%d", &d);
    for (c = 1; c <= d; c++) {
        result = result + v;
    }
    printf("The productt is: %d\n", result);
    
    return 0;
    
}