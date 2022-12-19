#include "s21_smart.h"

void s21_push(lexeme **head, double value, int priority, lexeme_enum type) {
  lexeme *tmp = (lexeme *)malloc(sizeof(lexeme));
  if (tmp == NULL) {
    exit(STACK_OVERFLOW);
  }
  tmp->next = *head;
  tmp->value = value;
  tmp->priority = priority;
  tmp->type = type;
  *head = tmp;
}

void s21_pop(lexeme **head) {
  lexeme *tmp = *head;
  if ((*head) == NULL) {
    exit(STACK_UNDERFLOW);
  }
  *head = (*head)->next;
  if (tmp != NULL)
    free(tmp);
}

int s21_isempty(lexeme *head) {
  int res = 0;
  if (head == NULL)
    res = 1;
  return res;
}

void s21_calc(lexeme **numbers, lexeme **operators, double *final) {
  double first = 0, second = 0, tmp = 0;
  first = ((*numbers)->value);
  s21_pop(numbers);
  second = ((*numbers)->value);
  s21_pop(numbers);
  if ((*operators)->type == 6) {
    tmp = first * second;
  }
  if ((*operators)->type == 3) {
    tmp = first + second;
  }
  if ((*operators)->type == 4) {
    tmp = first - second;
  }
  if ((*operators)->type == 5) {
    tmp = first / second;
  }
  s21_pop(operators);
  *final += tmp;
  printf("\nfirst %f  second %f\n", first, second);
  printf("%lf", *final);
}
// char *string = "5.2 + 5 * 2 + 4";

int s21_priority(lexeme **operators) {
  ((*operators)->priority);
  ((*operators)->priority);
  ((*operators)->priority);
}
