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
    int k;
    int l;
    char tmp;

    i = stu_strlen(str);
    j = 0;
    k = i - 2;
    l = j;
    while (l < k) {
        tmp = str[l];
        str[l] = str[k];
        str[k] = tmp;
        k -= 1;
        l += 1;
    }
    write(1, str, stu_strlen(str));
    str[i] = '\n';
    return 0;
}
