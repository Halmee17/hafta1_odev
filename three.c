#include <stdio.h>

int tree[10];

int main() {
    tree[0] = 1;
    tree[1] = 2;
    tree[2] = 3;
    tree[3] = 4;
    tree[4] = 5;

    for (int i = 0; i < 5; i++)
        printf("%d ", tree[i]);

    return 0;
}
