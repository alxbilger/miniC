#include <stdio.h>
#include "miniCConfig.h"
#include "square.h"

int main(int argc, char *argv[])
{
    printf("%s", argv[0]);
    printf("\n");
    printf("Version %d.%d", miniC_VERSION_MAJOR, miniC_VERSION_MINOR);

    const int s = square(12);
    printf("\nsquare of 12: %d", s);

    return 0;
}
