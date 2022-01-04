
#include <stdio.h>
#include "config.h"

int main(int argc, char const *argv[])
{
    if (argc < 2)
        printf("Demo Version %d.%d\n",
               VERSION_MAJOR, VERSION_MINOR);
    return 0;
}
