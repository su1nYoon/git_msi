#include <stdio.h>

int calc(int n, int s);

int main(void) {
    int n, s, result;

    printf("n 값을 입력하세요: ");
    scanf("%d", &n);

    printf("s 값을 입력하세요(1 or 2): ");
    scanf("%d", &s);

    result = calc(n, s);

    printf("%d\n", result);

    return 0;
}

int calc(int n, int s) {
    int result = 0;
    
    if (s == 1) {
        for (int i = 1; i <= n; i++) {
            result += i;
        }
    } else if (s == 2) {
        result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
    } 
    
    return result;
}
