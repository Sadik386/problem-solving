#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 50, 40},max=0;
    
    for (int i = 0 ; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] >max)
        {
            max =arr[i];
        }
        
    }
    printf("%d",max);
    
    
}