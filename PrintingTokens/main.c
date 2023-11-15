#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    //char buf[64];
    //sscanf(s, "%s", buf);
    //printf("%s", buf);

    char buf[64];
    int bufIndex = 0;
    for (int i = 0; i < strlen(s); i++) {
        buf[bufIndex] = s[i];
        bufIndex++;
        if (s[i] == ' ') {
            printf("%s\n", buf);
            memset(buf, 0, sizeof(buf));
            bufIndex = 0;
        }
    }
    printf("%s\n", buf);

    return 0;
}