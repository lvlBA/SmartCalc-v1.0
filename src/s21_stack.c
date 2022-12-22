#include "s21_smart.h"

void s21_push(lexeme **head, double value, int type, int priority) {
  lexeme *tmp = (lexeme *)malloc(sizeof(lexeme));
  tmp->value = value;
  tmp->type = type;
  tmp->priority = priority;
  tmp->next = (*head);
  (*head) = tmp;
}

lexeme s21_top(lexeme **head) {
  lexeme *tmp = (*head);
  return *tmp;
}

void s21_pop(lexeme **head) {
  lexeme *prev = (*head);
  if (prev) {
    free(*head);
  }
  (*head) = prev->next;
}

lexeme top(lexeme **head) {
  lexeme *tmp = (*head);
  return *tmp;
}

int s21_next_sym(lexeme **head) { return (*head)->type; }
