/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 10:27 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: read the memory and allocate it
 */

#include <stdlib.h>
#include <unistd.h>
#include "rev.h"
#include <stdio.h>
#include <fcntl.h>

char *mem_read(struct read *m_read)
{
    int size_read;
    char *buffer;
    char *str;

    size_read = 1;
    buffer = malloc(sizeof(char) * 11);
    m_read->tmp = malloc(sizeof(char) * 1);
    while (size_read > 0) {
        str = malloc(sizeof(char) * (12 + stu_strlen(m_read->tmp)));
        stu_strcpy(str, m_read->tmp);
        free(m_read->tmp);
        size_read = read(0, buffer, 10);
        buffer[size_read] = '\0';
        stu_strcat(str, buffer);
        m_read->tmp = stu_strdup(str);
        free(str);
    }
    free(buffer);
    return (m_read->tmp);
}
