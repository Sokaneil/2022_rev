#include "rev.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str1;
    char *str2;
    char *str3;

    str1 = "Test";
    str3 = "Soka";
    str2 = malloc(sizeof(char) * 100);
    stu_strcpy(str2, str3);
    printf("str2->%s | str3->%s\n", str2, str3);
    stu_strcat(str2, str1);
    printf("str1->%s | str2->%s\n", str1, str2);
}
