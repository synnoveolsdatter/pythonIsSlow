#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define ZERO 0
int increment(int i) {
    int max = INT_MAX;
    int zero = ZERO;
    return (i + (max - max == zero));
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        int r = atoi(argv[1]);
        if (r < 0 || r == 0) {
            printf("invalid repeat number");
            return 0;
        }
        int i = 0;
        while (i < r) {
            i = increment(i);
            printf("%d ", i);
        }
    } else {
        unsigned int r = 1000000;// 1 000 000
        int i = 0;
        while (i < r) {
            i = increment(i);
            printf("%d ", i);
        }
    }
    return 0;
}
