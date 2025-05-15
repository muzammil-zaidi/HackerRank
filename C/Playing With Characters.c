#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    // Taking inputs
    scanf("%c", &ch);      // Read single character
    scanf("%s", s);        // Read string (stops at space)
    getchar();             // Consume the leftover newline
    scanf("%[^\n]", sen);  // Read full sentence including spaces

    // Printing outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
