#include "s21_smart.h"

int main() {

  lexeme *numbers = NULL;
  lexeme *operators = NULL;
  lexeme tmp;
  double result = 0;
  char *string = "5 + 5 * 2";
  s21_parser(string, &numbers, &operators, &result);
  do {
    printf("%f\n", numbers->value);
    printf("%d\n", operators->priority);
    printf("%d\n", operators->type);
    printf("Isempty %d\n", s21_isempty(numbers));
    printf("tmp = %d\n", tmp.value);
    s21_pop(&numbers);
    s21_pop(&operators);

  } while (!s21_isempty(numbers) && !s21_isempty(operators));

  return 0;
}
