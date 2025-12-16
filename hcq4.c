#include <stdio.h>

#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;   // Convert to lowercase
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;   // Convert to uppercase
        }
    }

    printf("%s", s);
    return 0;
}
