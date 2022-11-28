/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 12:10 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: reversing the string
 */

#include <unistd.h>
#include <stdlib.h>
#include "rev.h"

char *reverse(char *str)
{
    int i;
    int j;
    char buf;

    i = 0;
    j = stu_strlen(str) - 1;
    while(i < j) {
        buf = str[i];
        str[i] = str[j];
        str[j] = buf;
        i += 1;
        j -= 1;
    }
    write(1, str, stu_strlen(str));
    write(1, "\n", 1);
    str[i] = '\n';
    return 0;
}
