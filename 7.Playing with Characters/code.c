#include <stdio.h>

int main() {
    char c;
    char s[100];
    char sen[100];
    scanf("%c", &c);
    scanf("%s", s);
    scanf("%*c");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
