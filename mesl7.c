#include <stdio.h>

char grade(int num) {
    if (num >= 80)
        return 'A';
    else if (num >= 60)
        return 'B';
    else
        return 'F';
}

int main() {
    char x = 75;
    printf("%c",grade(x));

   
}