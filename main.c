#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
    putenv("A=12121");
    printf("%s", getenv("A"));
    return 0;
}
