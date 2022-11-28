/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-23 - 09:58 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strcmp
 */

int stu_strcmp(char *s1, const char *s2)
{
    int i;
    i = 0;
    while((s1[i] != '\0' && s2[i] != '\0')) {
        if (s1[i] < s2[i]) {
            return -1;
        } else if (s1[i] > s2[i]) {
            return 1;
        }
        i = i + 1;
    }
    return 0;
}
