#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define ZERO 0
void increment(int i) {
    int max = INT_MAX;
    int zero = ZERO;
    i = (i + (max - max == zero));
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        int r = atoi(argv[1]);
        if (r < 0 || r == 0) {
            printf("invalid repeat number");
            return 0;
        }
        int i = 0;
        while (i < r) increment(i);
    } else {
        unsigned int r = 1000000;// 1 000 000
        int i = 0;
        while (i < r) increment(i);
    }
    return 0;
}
