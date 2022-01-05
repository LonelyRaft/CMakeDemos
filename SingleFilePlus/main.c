
#include <stdio.h>
#include "config.h"

int main(int argc, char const *argv[])
{
    if (argc < 2)
        printf("Demo Version %d.%d\n",
               VERSION_MAJOR, VERSION_MINOR);
#ifdef DEF_PRINT_MSG
    printf("Here is your message!\n");
#endif
    return 0;
}
