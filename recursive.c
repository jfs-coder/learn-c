#include <stdio.h>

int fact(int i) {
    if(i > 1) {
        return i * fact(i-1);
    }
    else return i;
}

int main() {
    /* testing code */
    printf("1! = %i\n", fact(1));
    printf("3! = %i\n", fact(3));
    printf("5! = %i\n", fact(5));
}


