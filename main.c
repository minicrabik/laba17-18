#include <stdio.h>
#include "string/string.h"

int main() {
    char *str = "12 3";
    char result = findNonSpace(str);

    printf("Result: %c\n", result);

    return 0;
}
