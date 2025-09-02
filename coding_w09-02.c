#include <stdio.h>

int main() {
    int sum, p, x, y;// x=1, y=1, p=0, sum=0;
    sum = 0;// initialize sum
    for (x = 1, y = 1; x * y <= 15; x++, y += 2)// x=1, y=1; x=2, y=3; x=3, y=5; x=4, y=7; x=5, y=9 
    {
        p = x * y;// p=1, p=6, p=15, p=28, p=45
        sum = sum + p;// sum=1, sum=7, sum=22, sum=50, sum=95
        printf("%d * %d = %d\n", x, y, p);// print x, y, p
    }
    printf("Summation of x * y =%d\n", sum);// print sum
    return 0;
    }
        
    