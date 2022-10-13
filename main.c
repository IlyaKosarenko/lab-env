#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char **argv) {
    printf("%s", getenv(argv[1]));
    return 0;
}
