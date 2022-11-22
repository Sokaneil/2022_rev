/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 10:28 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: main
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rev.h"

int main(void)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 33);
    if (!buffer) {
        return -1;
    }
    reverse(size_read(buffer));
    free(buffer);
}
