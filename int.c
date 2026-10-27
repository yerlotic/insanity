#include <limits.h>
#include <stdio.h>
#include <assert.h>

int add(int a) {
    assert(a+100 > a);
    return a + 100;
}

int main(int argc, char *argv[]) {
    printf("%d\n", add(1));
    printf("%d\n", add(INT_MAX));
    return 0;
}
