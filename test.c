#include <stdio.h>
#include "add.h"

int tests_failed = 0;

void assert_equal(int expected, int actual) {
    if (expected != actual) {
        printf("Test Failed: expected %d, got %d\n", expected, actual);
        tests_failed++;
    }
}

int main() {
    printf("Running tests...\n");

    assert_equal(5, add(2, 3));
    assert_equal(0, add(-2, 2));
    assert_equal(10, add(5, 5));

    if (tests_failed == 0) {
        printf("All tests passed!\n");
        return 0;
    }
    else {
        printf("%d tests failed.\n", tests_failed);
        return 1;
    }
}
