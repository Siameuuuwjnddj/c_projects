#include <stdio.h>

int main() {
    int a, b, result;
    char op;
    
    printf("Enter an expression: ");
    scanf("%d %c %d", &a, &op, &b);
    
    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }
    
    printf("Result: %d\n", result);
    
    return 0;
}
