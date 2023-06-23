#include <stdio.h>
int main() {
    char alpha;
    int alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alpha);

    alphabet = (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u'||alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U');
    // Alphabet acts as Flag it evalutes to 1 if any vowel found 
    if (alphabet )
        printf("%c is a vowel.", alpha);
    else
        printf("%c is a Consonant.", alpha);
    return 0;
}
