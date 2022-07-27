#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
    printf("%s\n", strerror(errno));

    return 0;
}
