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

int *reverse(char *str)
{
    int i;
    int j;
    char *buf;

    i = 0;
    j = stu_strlen(str) - 1;
    buf = malloc(sizeof(char) * (j + 2));
    while(j >= 0) {
        buf[i] = str[j];
        i += 1;
        j -= 1;
    }
    buf[i] = '\0';
    write(1, buf, stu_strlen(buf));
    write(1, "\n", 1);
    free(buf);
    return 0;
}
