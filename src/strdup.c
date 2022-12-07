/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-28 - 14:26 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strdup
 */

#include <stdlib.h>
#include "rev.h"

char *stu_strdup(const char *src)
{
    char *str;

    str = malloc(sizeof(char) * stu_strlen(src) + 1);
    if (!str) {
        return (NULL);
    }
    stu_strcpy(str, src);
    return (str);
}
