#include <stdio.h>

int main() {
    int i = 1;// initialize i to 1

    while (i <= 10) {// loop while i is less than or equal to 10
        if (i == 6) {// if i is 6
            i++; // increment i to avoid infinite loop
            continue;// skip the rest of the loop iteration
        }
        printf("%d ", i);// print i
        i++; // increment i
    }
    return 0;
}