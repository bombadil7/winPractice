#include <stdio.h>

#define PAGE_SHIFT      13
#define PAGE_SIZE       (1 << PAGE_SHIFT)

int main(void)
{
    printf("Linux page size is %d bytes\n", PAGE_SIZE);
    return 0;
}
