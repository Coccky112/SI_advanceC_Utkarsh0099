//Count_the_number_of_vowels,consonants,digits,andspaces_in_a_string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, v = 0, c = 0, d = 0, s = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        switch (str[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                v++;
                break;
            default:
                if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
                    c++;
                else if (str[i] >= '0' && str[i] <= '9')
                    d++;
                else if (str[i] == ' ')
                s++;
        }
        i++;
    }
    printf("Vowels = %d\nConsonants = %d\nDigits = %d\nSpaces = %d", v, c, d, s);
    return 0;
}
               
/*output
Enter a string: hello
Vowels = 2
Consonants = 3
Digits = 0
Spaces = 0*/
