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

void *s21_pop(lexeme **head) {
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
