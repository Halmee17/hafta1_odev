#include <stdio.h>
#include <string.h>

int oncelik(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

void shuntingYard(char* infix) {
    char stack[100];
    int top = -1;

    printf("Postfix: ");
    for (int i = 0; i < strlen(infix); i++) {
        char c = infix[i];

        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            printf("%c ", c);
        } else if (c == '(') {
            stack[++top] = c;
        } else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                printf("%c ", stack[top--]);
            }
            top--; // '(' karakterini at
        } else {
            while (top != -1 && oncelik(stack[top]) >= oncelik(c)) {
                printf("%c ", stack[top--]);
            }
            stack[++top] = c;
        }
    }
    while (top != -1) printf("%c ", stack[top--]);
    printf("\n");
}

int main() {
    char ifade1[] = "a*b+c";
    char ifade2[] = "(a+b)*c";

    printf("Infix: %s\n", ifade1);
    shuntingYard(ifade1);

    printf("\nInfix: %s\n", ifade2);
    shuntingYard(ifade2);

    return 0;
}
