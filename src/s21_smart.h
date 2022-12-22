#ifndef SRC_S21_SMART_H_
#define SRC_S21_SMART_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  struct Node *next;
  lexeme_enum type;
} lexeme;

void s21_push(lexeme **head, double value, int type, int priority);
int s21_string_to_double(char *str, char **end, double *number);
int s21_is_digit(char c);
int s21_next_sym(lexeme **head);
void s21_pop(lexeme **head);
lexeme s21_top(lexeme **head);
lexeme s21_peek(lexeme *head);
lexeme s21_parser(char *lexem, char **end);
lexeme s21_calc(double first, double second, int type);
lexeme s21_calc_func(double first, int type);
int s21_check_string(char *str);
void s21_calculation(lexeme **numbers, lexeme **operators);
void s21_logic(lexeme **numbers, lexeme **operators, lexeme tmp, double x);
double s21_smart_calc(char *string, double x);
#endif  // SRC_S21_SMART_H_
