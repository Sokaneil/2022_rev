/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-23 - 10:43 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strchr
 */

int stu_strchr(const char *str, char search)
{
    int i;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\\' && str[i + 1] == 'n') {
            return 0;
        } else if (str[i] == search) {
            return 1;
        }
        i = i + 1;
    }
    return 0;
}


