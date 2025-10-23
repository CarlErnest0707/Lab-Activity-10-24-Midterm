#include <stdio.h>
int main() {
    int i;
    long long result = 1;
    for (i = 1; i <= 12; i++) {
        result = result * 3;
        printf("3^%d = %11d\n", i, result);
    }
    return 0;
}