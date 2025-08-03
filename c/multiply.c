


// #include <stdio.h>

// int main() {
//     int a = 6, b = 3;
//     int result;
    
//     int *p1 = &a;
//     int *p2 = &b;

//     result = (*p1) * (*p2);  // dereferencing and multiplying

//     printf("Multiplication of %d and %d is %d\n", *p1, *p2, result);

//     return 0;
// }



#include <stdio.h>

int main() {
    int a = 10, b = 2;
    int result;
    
    int *p1 = &a;
    int *p2 = &b;

    if (*p2 != 0) {
        result = (*p1) / (*p2);  // dereferencing and dividing
        printf("Division of %d by %d is %d\n", *p1, *p2, result);
    } else {
        printf("Error: Division by zero!\n");
    }

    return 0;
}
