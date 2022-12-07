/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 10:28 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: main
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rev.h"

int main(void)
{
    struct read m_read;

    mem_read(&m_read);
    rev_in_order(&m_read);
    free(m_read.tmp);
}
