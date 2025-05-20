#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];  // Declare a string with a large enough size
    int freq[10] = {0};  // Initialize an array to store digit frequencies

    scanf("%s", str);  // Read the input string

    // Traverse the string and count digit occurrences
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;  // Convert char to corresponding integer index
        }
    }

    // Print the frequencies
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}
