#include <stdio.h>

void printNumberInWordsOrEvenOdd(int a, int b) {
    // Array of number words for numbers 1 to 9
    const char *number_words[] = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    
    // Iterate from a to b
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print word if number is between 1 and 9
            printf("%s\n", number_words[i - 1]);
        } else {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
}

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b); // Read input values
    printNumberInWordsOrEvenOdd(a, b); // Call function
    return 0;
}
