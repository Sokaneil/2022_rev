/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 09:47 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strlen
 */

unsigned int stu_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

