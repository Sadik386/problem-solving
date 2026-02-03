#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a != b && b != c && a != c){
    if (a > b)
    {
        if (a>c)
        {
            printf("a is the biggest");
        }
        
    }
    if (b>a)
    {
        if (b > c)
        {
            printf("b is the biggest");
        }
    
        
    }
    if (c > a)
    {
        if (c > b)
        {
            printf("c is the biggest");
        }
        
    }
}
    else if (a == b && a > c) {
        printf("a and b are equal and biggest");
    }
    else if (b == c && b > a) {
        printf("b and c are equal and biggest");
    }
    else if (a == c && a > b) {
        printf("a and c are equal and biggest");
    }
    else if (a == b && b == c) {
        printf("all are equal");
    }
    return 0;
}