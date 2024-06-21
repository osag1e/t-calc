#include <stdio.h>
#include <math.h>


typedef struct {
    float x;
    float y;
    float result;
} Calculator;


void add(Calculator *calc) {
    printf("Enter your numbers:\n");
    scanf("%f", &calc->x);
    scanf("%f", &calc->y);

    calc->result = calc->x + calc->y;
    printf("Addition total is: %.2f\n", calc->result);
}


void subtract(Calculator *calc) {
    printf("Enter your numbers:\n");
    scanf("%f", &calc->x);
    scanf("%f", &calc->y);

    calc->result = calc->x - calc->y;
    printf("Subtraction total is: %.2f\n", calc->result);
}


void multiply(Calculator *calc) {
    printf("Enter your numbers:\n");
    scanf("%f", &calc->x);
    scanf("%f", &calc->y);

    calc->result = calc->x * calc->y;
    printf("Multiplication total is: %.2f\n", calc->result);
}


void divide(Calculator *calc) {
    printf("Enter your numbers:\n");
    scanf("%f", &calc->x);
    scanf("%f", &calc->y);

    if(calc->y != 0) {
        calc->result = calc->x / calc->y;
        printf("Division total is: %.2f\n", calc->result);
    } else {
        printf("Error: Division by zero is undefined.\n");
    }
}


void modulo(Calculator *calc) {
    printf("Enter your numbers:\n");
    scanf("%f", &calc->x);
    scanf("%f", &calc->y);

    calc->result = (int) calc->x % (int) calc->y;
    printf("The modulus is: %.0f\n", calc->result);
}


void exponent(Calculator *calc) {
    printf("Enter your numbers:\n");
    scanf("%f", &calc->x);
    scanf("%f", &calc->y);

    calc->result = pow(calc->x, (int) calc->y);
    printf("The exponent is: %.2f\n", calc->result);
}


int main() {
    Calculator calc;
    char operator;

    printf("Choose your operation (+, -, *, /, m, ^): ");
    scanf("%c", &operator);

    switch(operator) {
        case '+':
        add(&calc);
        break;
        case '-':
        subtract(&calc);
        break;
        case '*':
        multiply(&calc);
        break;
        case '/':
        divide(&calc);
        break;
        case 'm':
        modulo(&calc);
        break;
        case '^':
        exponent(&calc);
        break;
        default:
        printf("Operator invalid!\n");
    }
    
    return 0;
} 

