/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-23 - 10:05 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: rev in order
 */

#include <unistd.h>
#include <stdlib.h>
#include "rev.h"

char *rev_in_order(char *str)
{
    int i;
    int j;
    char *str1;

    i = 0;
    j = 0;
    str1 = malloc(sizeof(char) * stu_strlen(str));
    while (str[i + 1] != '\0') {
        while (str[i] != '\n') {
            str1[j] = str[i];
            i += 1;
            j += 1;
        }
        str1[j] = '\0';
        reverse(str1);
        i += 1;
        j = 0;
    }
    free(str1);
    return (0);
}
