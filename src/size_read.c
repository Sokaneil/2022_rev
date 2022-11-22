/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 10:27 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: read
 */

#include <unistd.h>

char *size_read(char *buffer)
{
    int size_read;

    size_read = read(0, buffer, 33);
    if (size_read == -1) {
        return "error";
    }
    buffer[size_read] = '\0';
    return (buffer);
}
