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

int *rev_in_order(struct read *m_read)
{
    int i;
    int j;
    char *str;

    i = 0;
    str = malloc(sizeof(char) * stu_strlen(m_read->tmp));
    while (m_read->tmp[i] != '\0') {
        j = 0;
        while (m_read->tmp[i] != '\n' && m_read->tmp[i] != '\0') {
            str[j] = m_read->tmp[i];
            i += 1;
            j += 1;
        }
        str[j] = '\0';
        reverse(str);
        i += 1;
    }
    free(str);
    return (0);
}
