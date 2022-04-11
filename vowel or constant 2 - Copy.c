#include <stdio.h>
int main() {
    char c,n;
    int lowercase, uppercase,lowercase1,uppercase1;
    scanf("%c %c", &c,&n);
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    lowercase1 = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u');
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    uppercase1 = (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U');
    if (lowercase || uppercase)
        {
         if(lowercase1 || uppercase1)
         printf("'%c' is a vowel '%c' is a vowel.",c,n);
         else
            printf("'%c' is a vowel '%c' is a consonant",c,n);
        }
    else if (lowercase1 || uppercase1)
    {
        if (lowercase || uppercase)
            printf("'%c' is a vowel '%c' is a vowel",c,n);
        else
            printf("'%c' is a consonant '%c' is a vowel",c,n);
    }
    else
        printf("'%c' is a consonant '%c' is a consonant.",c,n);
    return 0;
}
