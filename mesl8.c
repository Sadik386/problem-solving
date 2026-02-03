// #include <stdio.h>

// void reverseArray(int val[], int n) {
//     int l = 0, r = n - 1;
//     int temp;

//     while (l < r) {
//         temp = val[l];
//         val[l] = val[r];
//         val[r] = temp;
//         l++;
//         r--;
//     }
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     reverseArray(arr, n);

//     // Print reversed array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
#include <stdio.h>

void reverseArray(int *val, int n) {
    int l = 0, r = n - 1;
    int temp;

    while (l < r) {
        temp = *(val + l);
        *(val + l) = *(val + r);
        *(val + r) = temp;
        l++;
        r--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}




