#include "s21_smart.h"

void s21_parser(char *string, double *result) {
  lexeme *numbers = NULL;
  lexeme *operators = NULL;
  char *array[256] = {0};
  double value = 0;
  char *end = NULL;
  double final = 0;
  for (int i = 0; i < strlen(string); i++) {
    if (string[i] == 32) {
      continue;
    }
    if (s21_string_to_double(&string[i], &end, &value)) {
      s21_push(&numbers, value, 0, 0);
      i += end - &string[i];
    }
    if (string[i] == '+') {
      s21_push(&operators, 0, 1, PLUS_LEXEME);
    }
    if (string[i] == '-' && string[i + 1] != 'x') {
      s21_push(&operators, 0, 1, MINUS_LEXEME);
    }
    if (string[i] == '*') {
      if (!s21_isempty(operators)) {
        if (operators->priority < 2) {
          s21_calc(&numbers, &operators, &final);
        }
      }
      s21_push(&operators, 0, 2, MUL_LEXEME);
    }
    if (string[i] == '/') {
      s21_push(&operators, 0, 2, DIV_LEXEME);
    }
    if (string[i] == 'x' && string[i - 1] != '-' && string[i - 1] != '(' &&
        string[i + 1] != ')') {
      s21_push(&operators, 0, 0, X_LEXEME);
    }
    if (string[i] == '^') {
      s21_push(&operators, 0, 3, POW_LEXEME);
    }
    if (string[i] == 'm' && string[i + 1] == 'o' && string[i + 2] == 'd') {
      s21_push(&operators, 0, 3, MOD_LEXEME);
    }
    if (string[i] == '(' && string[i - 1] != 's' && string[i - 1] != 'n' &&
        string[i - 1] != 't' && string[i - 1] != 'g') {
      s21_push(&operators, 0, 5, LEFTScobe_LEXEME);
    }
    if (string[i] == ')' && string[i - 1] != 'x') {
      s21_push(&operators, 0, 5, RIGHTScobe_LEXEME);
    }
    if (string[i] == 'c' && string[i + 1] == 'o' && string[i + 2] == 's' &&
        string[i + 3] == '(' && string[i + 4] == 'x' && string[i + 5] == ')') {
      s21_push(&operators, 0, 4, COS_LEXEME);
    }
    if (string[i] == 's' && string[i + 1] == 'i' && string[i + 2] == 'n' &&
        string[i + 3] == '(' && string[i + 4] == 'x' && string[i + 5] == ')') {
      s21_push(&operators, 0, 4, SIN_LEXEME);
    }
    if (string[i] == 't' && string[i + 1] == 'a' && string[i + 2] == 'n' &&
        string[i + 3] == '(' && string[i + 4] == 'x' && string[i + 5] == ')') {
      s21_push(&operators, 0, 4, TAN_LEXEME);
    }
    if (string[i] == 'a' && string[i + 1] == 'c' && string[i + 2] == 'o' &&
        string[i + 3] == 's' && string[i + 4] == '(' && string[i + 5] == 'x' &&
        string[i + 6] == ')') {
      s21_push(&operators, 0, 4, ACOS_LEXEME);
    }
    if (string[i] == 'a' && string[i + 1] == 's' && string[i + 2] == 'i' &&
        string[i + 3] == 'n' && string[i + 4] == '(' && string[i + 5] == 'x' &&
        string[i + 6] == ')') {
      s21_push(&operators, 0, 4, ASIN_LEXEME);
    }
    if (string[i] == 'a' && string[i + 1] == 't' && string[i + 2] == 'a' &&
        string[i + 3] == 'n' && string[i + 4] == '(' && string[i + 5] == 'x' &&
        string[i + 6] == ')') {
      s21_push(&operators, 0, 4, ATAN_LEXEME);
    }
    if (string[i] == 's' && string[i + 1] == 'q' && string[i + 2] == 'r' &&
        string[i + 3] == 't' && string[i + 4] == '(' && string[i + 5] == 'x' &&
        string[i + 6] == ')') {
      s21_push(&operators, 0, 4, SQRT_LEXEME);
    }
    if (string[i] == 'l' && string[i + 1] == 'o' && string[i + 2] == 'g' &&
        string[i + 3] == '(' && string[i + 4] == 'x' && string[i + 5] == ')') {
      s21_push(&operators, 0, 4, LOG_LEXEME);
    }
    if (string[i] == 'l' && string[i + 1] == 'n' && string[i + 2] == '(' &&
        string[i + 3] == 'x' && string[i + 4] == ')') {
      s21_push(&operators, 0, 4, LN_LEXEME);
    }
    if (string[i] == '~') {
      s21_push(&operators, 0, 9, DIG_LEXEME);
    }
  }
  s21_calc(&numbers, &operators, &final);
  printf("%lf", final);
}
