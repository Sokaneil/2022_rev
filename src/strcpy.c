/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-28 - 14:33 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strcpy
 */

#include "rev.h"

char *stu_strcpy(char *dest, const char *src)
{
    int m;

    m = 0;
    while (src[m] != '\0') {
        dest[m] = src[m];
        m = m + 1;
    }
    dest[m] = '\0';
    return dest;
}
