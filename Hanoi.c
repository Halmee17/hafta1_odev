#include <stdio.h>

void hanoi(int n, char src, char aux, char dest) {
    if (n == 0) return;

    hanoi(n - 1, src, dest, aux);
    printf("Move disk %d from %c to %c\n", n, src, dest);
    hanoi(n - 1, aux, src, dest);
}

int main() {
    int n = 3;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
