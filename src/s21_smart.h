#ifndef SRC_S21_SMART_H_
#define SRC_S21_SMART_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_OVERFLOW -100
#define STACK_UNDERFLOW -101
#define OUT_OF_MEMORY -102

typedef enum {
  DIG_LEXEME = 1,
  X_LEXEME = 2,
  PLUS_LEXEME = 3,
  MINUS_LEXEME = 4,
  DIV_LEXEME = 5,
  MUL_LEXEME = 6,
  POW_LEXEME = 7,
  MOD_LEXEME = 8,
  COS_LEXEME = 11,
  SIN_LEXEME = 12,
  TAN_LEXEME = 13,
  ACOS_LEXEME = 14,
  ASIN_LEXEME = 15,
  ATAN_LEXEME = 16,
  SQRT_LEXEME = 17,
  LN_LEXEME = 18,
  LOG_LEXEME = 19,
  LEFTScobe_LEXEME = 20,
  RIGHTScobe_LEXEME = 21
} lexeme_enum;

typedef struct Node {
  double value;
  int priority;
  lexeme_enum type;
  struct Node *next;
} lexeme;

void s21_push(lexeme **head, double value, int priority, lexeme_enum type);
int s21_string_to_double(char *str, char **end, double *number);
int s21_is_digit(char c);
void s21_pop(lexeme **head);
lexeme s21_peek(lexeme *head);
int s21_isempty(lexeme *head);
void s21_parser(char *string, double *result);
void s21_calc(lexeme **numbers, lexeme **operators);
#endif // SRC_S21_SMART_H_
