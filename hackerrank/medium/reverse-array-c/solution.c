#include <stdio.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int difference = *a - *b;

    if (difference < 0) {
        difference = -difference;
    }

    *a = sum;
    *b = difference;
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    update(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
