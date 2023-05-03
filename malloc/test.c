#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
int main()
{
    void *p = sbrk(5 * (1 << 20));
    void *t = sbrk(0);
    void *s = sbrk(0);
    printf("%lu %lu\n",(size_t)s,(size_t)t);
    return 0;
}