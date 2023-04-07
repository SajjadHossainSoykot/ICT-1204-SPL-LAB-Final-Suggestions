#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }
    printf("The number of vowels is: %d\n", vowels);
    printf("The number of consonants is: %d\n", consonants);
    return 0;
}
