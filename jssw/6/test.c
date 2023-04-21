#include <stdio.h>

int main(){
    char str[5][10];
    char (*arr)[10] = str;
    scanf("%s", *(arr + 1));
    printf("%s", *(arr + 1));

    return 0;
}