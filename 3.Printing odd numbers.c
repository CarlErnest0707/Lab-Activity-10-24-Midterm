#include <stdio.h>
int main() {
    int c;
    for(c = 1; c <= 1000; c++) {
        if(c % 2 != 0) {
            printf("%d\n", c);
        }
    }
    return 0;
}