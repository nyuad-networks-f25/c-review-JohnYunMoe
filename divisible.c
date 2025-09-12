#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("foobar\n");
    } else if (num % 3 == 0) {
        printf("foo\n");
    } else if (num % 5 == 0) {
        printf("bar\n");
    } else {
        printf("Not divisible by 3 or 5\n");
    }

    return 0;
}