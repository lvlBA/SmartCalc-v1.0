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

void s21_calc(lexeme **numbers, lexeme **operators) {
  if ((*operators)->type == 20) {
    s21_pop(operators);
    return;
  }
  double first = 0, second = 0, tmp = 0, flag = 0;
  first = ((*numbers)->value);
  printf("\nfirst: %lf ", first);
  s21_pop(numbers);
  second = ((*numbers)->value);
  printf("\nsecond: %lf ", second);
  s21_pop(numbers);
  printf("\nsign is equal to %d ", (*operators)->type);

  if ((*operators)->type == 6) {
    tmp = first * second;
    flag = 1;
  }
  if ((*operators)->type == 3) {
    tmp = first + second;
  }
  if ((*operators)->type == 4) {
    tmp = second - first;
  }
  if ((*operators)->type == 5) {
    tmp = second / first;
    flag = 1;
  }
  if (!s21_isempty(*operators)) {
    s21_pop(operators);
  }

  // delenie i umnozhenie s minusom
  if (!s21_isempty(*operators)) {
    if (flag == 1 && (*operators)->type == 4) {
      tmp *= -1;
      s21_pop(operators);
    }
  }

  s21_push(numbers, tmp, 0, 0);
  // printf("\nfirst %f  second %f\n", first, second);

  printf("\ntmp == %lf", tmp);
}
// char *string = "5.2 + 5 * 2 + 4";
