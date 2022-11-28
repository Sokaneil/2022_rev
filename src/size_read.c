/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 10:27 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: read
 */

#include <unistd.h>
#include "rev.h"

char *size_read(char *buffer)
{
    int size_read;

    if (!buffer) {
        return 0;
    }
    size_read = read(0, buffer, 1023);
    if (size_read == -1) {
        return "error";
    }
    buffer[size_read] = '\0';
    return (buffer);
}
