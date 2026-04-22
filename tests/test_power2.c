#include <stdio.h>

int main(void) {
    int x = 3;
    int r;

    r = x * 2;
    if (r != 6) { printf("fail *2: %d\n", r); return 1; }

    r = x * 4;
    if (r != 12) { printf("fail *4: %d\n", r); return 1; }

    r = x * 8;
    if (r != 24) { printf("fail *8: %d\n", r); return 1; }

    r = x * 16;
    if (r != 48) { printf("fail *16: %d\n", r); return 1; }

    r = x * 1024;
    if (r != 3072) { printf("fail *1024: %d\n", r); return 1; }

    r = 7 * 2;
    if (r != 14) { printf("fail 7*2: %d\n", r); return 1; }

    r = 5 * 32;
    if (r != 160) { printf("fail 5*32: %d\n", r); return 1; }

    puts("ok");
    return 0;
}