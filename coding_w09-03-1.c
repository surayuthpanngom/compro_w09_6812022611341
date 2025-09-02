#include <stdio.h>

int main() {
    int i = 1;

    do {
        if (i == 6) {
            i++; 
            continue;
        }
        printf("%d ", i);
        i++; 
    } while (i <= 10);
    
    return 0;
}
