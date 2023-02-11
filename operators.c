#include <stdio.h>
main(){
  char operator;
  double first, second;
printf("Enter an operator:- +, -, *, /, % ");
  scanf("%c", &operator);
while (operator != 'q') {
    printf("Enter two operands:- ");
    scanf("%lf%lf", &first, &second);
switch(operator) {
      case '+':
        printf("%lf + %lf = %lf\n",first,second, first + second);
        break;
        case '-':
        printf("%lf - %lf = %lf\n", first, second, first - second);
        break;
        case '*':
        printf("%lf * %lf = %lf\n", first, second, first * second);
        break;
case '/':
        printf("%lf / %lf = %lf\n", first, second, first / second);
        break;
      case '%':
        printf("%lf %c %lf = %lf\n", first, operator, second, (int)first % (int)second);
        break;
case 'r':
        printf("%lf %c %lf = %lf\n", first, operator, second, (int)first / (int)second);
        break;
      default:
        printf("Your operator is not correct\n");
    }
printf("Enter an operator (+, -, *, /, %) or 'q' to quit: ");
    scanf(" %c", &operator);
  }
}
