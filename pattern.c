#include <stdio.h>

int main() {
    int n = 5;

    // 1. Square Pattern
    printf("Square Pattern:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Square Pattern
    // *****
    // *****
    // *****
    // *****
    // *****

    // 2. Hollow Square Pattern
    printf("Hollow Square Pattern:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Hollow Square Pattern
    // *****
    // *   *
    // *   *
    // *   *
    // *****

    // 3. Right Triangle Pattern
    printf("Right Triangle Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Right Triangle Pattern
    // *
    // **
    // ***
    // ****
    // *****

    // 4. Inverted Right Triangle Pattern
    printf("Inverted Right Triangle Pattern:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Inverted Right Triangle Pattern
    // *****
    // ****
    // ***
    // **
    // *

    // 5. Pyramid Pattern
    printf("Pyramid Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Pyramid Pattern
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    // 6. Inverted Pyramid Pattern
    printf("Inverted Pyramid Pattern:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Inverted Pyramid Pattern
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    // 7. Number Pyramid Pattern
    printf("Number Pyramid Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Number Pyramid Pattern
    //     1
    //    12
    //   123
    //  1234
    // 12345

    // 8. Inverted Number Pyramid Pattern
    printf("Inverted Number Pyramid Pattern:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Inverted Number Pyramid Pattern
    // 12345
    //  1234
    //   123
    //    12
    //     1

    // 9. Floyd's Triangle
    printf("Floyd's Triangle:\n");
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Floyd's Triangle
    // 1
    // 23
    // 456
    // 789
    // 101112

    // 10. Diamond Pattern
    printf("Diamond Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    // Output for Diamond Pattern
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    return 0;
}
