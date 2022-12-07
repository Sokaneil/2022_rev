/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: Header files
 */

#ifndef REV_H_
#define REV_H_
#include "read.h"

unsigned int stu_strlen(const char *str);
char *mem_read(struct read *m_read);
int *reverse(char *str);
int *rev_in_order(struct read *m_read);
char *stu_strcpy(char *dest, const char *src);
char *stu_strdup(const char *src);
char *stu_strcat(char *dest, const char *src);

#endif
